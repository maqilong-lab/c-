#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int i = 0;
	do
	{
		printf("%d\n", i);
		i++;
	} while (i < 10);
		
	return 0;
}

//int main()
//{
//	int i = 0;
//	for (; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!= EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)  //EOF--end of file文件结束标志
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("请输入密码\n");
//	scanf("%s", password);		//输入密码，并存放在password数组中
//	printf("请确认(Y/N)\n");
//	while((ch = getchar()) != '\n')
//	{ 
//		;
//	}
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//
//	return 0;
//}