#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	for(int i = 1;i <= 100;i += 2 )
	{
		if(i % 2 == 1)
			printf("%d������\n", i);
	}
	return 0;
}



//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i % 2 == 1)
//		printf("%d������", i);
//	else
//		printf("%d��ż��", i);
//	
//	return 0;
//}