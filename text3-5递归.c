#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ѭ���汾
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

//�ݹ�汾
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



//ѭ���汾
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

//�ݹ�汾
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//���ַ�������
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("len = %d", len);
//	return 0;
//}

//�ݹ鵹�����
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