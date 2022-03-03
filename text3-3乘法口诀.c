#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("******************************\n");
	printf("******************************\n");
	printf("*****<  1:play  0:exit  >*****\n");
	printf("******************************\n");
	printf("******************************\n");
}

void game()
{
	//生成随机数
	int ret = 0;
	ret = rand() % 100 + 1;

	//猜数字
	while (1)
	{
		int guess = 0;
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (ret > guess)
			printf("猜小了\n");
		else if (guess > ret)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		printf("\n");
	}
}

int main()
{
	int input = 0;
	do
	{
		menu();
		srand((unsigned int)time(NULL));
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}
	while (input);
	return 0;
}

//99乘法表
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d   ", j, i, i * j);//负号表示向左对齐,2d表示两个位置
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}