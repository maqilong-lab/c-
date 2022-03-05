#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//Ñ­»·°æ±¾
//int Facl(int n)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//	
//}

//µÝ¹é°æ±¾
//int Facl(n)
//{
//	if (n > 1)
//		return n * Facl(n - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Facl(n);
//	printf("ret = %d", ret);
//	return 0;
//}



//Ñ­»·°æ±¾
//int my_strlen(char * str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//µÝ¹é°æ±¾
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//Çó×Ö·û´®³¤¶È
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("len = %d", len);
//	return 0;
//}

//µÝ¹éµ¹ÐòÊä³ö
//void print(int n)
//{
//	if (n >= 1)
//	{
//		printf("%d  ", n % 10);
//		print(n / 10);
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//
//}