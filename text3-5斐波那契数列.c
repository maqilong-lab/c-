#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ѭ��ʵ��
int Fib(n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

//�ݹ�ʵ��
//int Fib(int n)
//{
//	if (n > 2)
//		return Fib(n - 1) + Fib(n - 2);
//	else
//		return 1;
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = 0;
	ret = Fib(n);
	printf("��%d��쳲���������Ϊ%d", n, ret);

	return 0;
}