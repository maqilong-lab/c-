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
	//���������
	int ret = 0;
	ret = rand() % 100 + 1;

	//������
	while (1)
	{
		int guess = 0;
		printf("�������:>");
		scanf("%d", &guess);
		if (ret > guess)
			printf("��С��\n");
		else if (guess > ret)
			printf("�´���\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}
	while (input);
	return 0;
}

//99�˷���
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d   ", j, i, i * j);//���ű�ʾ�������,2d��ʾ����λ��
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}