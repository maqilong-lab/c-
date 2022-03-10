#define _CRT_SECURE_NO_WARNINGS 1

#include "text3-7game.h"

void menu()
{
	printf("***********************\n");
	printf("*** 1.play   0.exit ***\n");
	printf("***********************\n");
}

//游戏的整个算法实现
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 'a' };

	//初始化棋盘
	InitBoard(board, ROW, COL);

	//打印棋盘
	DisplayBoard(board, ROW, COL);

	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);

		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//电脑下棋
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");
}

void text()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("\n");
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误，请重新选择！！");
			break;
		}
	} while (input);
}

int main()
{
	text();
	return 0;
}