#define _CRT_SECURE_NO_WARNINGS 1

//求素数
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		for (j = 3; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("100-200之间有%d个素数", count);
//	return 0;
//}

//求闰年
//#include <stdio.h>
//
////打印1000-2000之间的闰年
//int main()
//{
//	int year = 0, count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d是闰年\n", year);
//			count++;
//		}
//	}
//	printf("在1000-2000之间有%d个闰年",count);
//	return 0;
//}