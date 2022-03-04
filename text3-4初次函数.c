#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Add(int* p)
{
	(*p)++;
}

int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	return 0;
}



//二分法
//int binary_search(int  arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	int tag = 0;
//	while (right >= left)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			tag = mid;
//			break;
//		}
//	}
//	if (right < left)
//		tag = -1;
//	return tag;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	scanf("%d", &k);
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//		printf("找不到指定的数字\n");
//	else
//		printf("找到了，下标是%d\n", ret);
//	return 0;
//}

//求素数
// #include <math.h>
//int Isprime(int k)
//{
//	int j = 1;
//	int flag = 0;
//	for (j = 2; j <= sqrt(k); j++)
//	{
//		if (k % j == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (j > sqrt(k))
//		flag = 1;
//	return flag;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		if (Isprime(i) == 1)
//			printf("%d是素数\n", i);
//		/*else
//			printf("%d不是素数\n", i);*/
//	}
//	return 0;
//}


//交换数值
//void Swap(int *x,int *y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d  b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a=%d  b=%d\n", a, b);
//
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr[] = "hello word";
//	memset(arr, '*', 5);
//	printf("%s", arr);
//
//	return 0;
//}