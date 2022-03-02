#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	int temp = 0;
	scanf("%d%d", &m, &n);
	int p = m, q = n;
	if (m < n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	while(temp =m % n )
	{
		//temp = m % n;
		m = n;
		n = temp;
	}
	printf("%d和%d的最大公约数是%d", p, q,n );
	return 0;
}