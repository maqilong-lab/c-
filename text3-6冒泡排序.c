#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//√∞≈›≈≈–Ú
void Bubble_sort(int* arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)				 //»∑∂®≈≈–ÚÃÀ ˝
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1- i; j++)		 //√ø“ªÃÀ√∞≈›≈≈–Ú	
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}

int main()
{
	int arr[] = { 9,0,1,2,3,4,5,6,7,8};
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr,sz);
	int i = 0;
	for(i = 0; i < sz; i++)
		printf("arr[%d] = %d\n", i, arr[i]);
	return 0;
}