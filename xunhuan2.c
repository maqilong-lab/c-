#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)  //getcharÓöµ½ctrl + zÍË³ö
	{
		putchar(ch);
	}
	return 0;
}

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//	return 0;
//}

////ËÀÑ­»·
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}