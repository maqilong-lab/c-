#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�����ֵ
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 1;
//	for (i; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d", max);
//
//	return 0;
//}

//������Ͳ�
//#include <stdio.h>
//
//int main()
//{
//	int i = 1;
//	double sum = 0;
//	int flag = 1;
//	for (i; i <= 100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}

//����1-100֮���м���ĩβΪ9������
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i = 9; i <= 100; i++)
//	{
//		if (i % 10 == 9 )
//			count++;
//		if(i /10 == 9)
//			count++;
//
//	}
//	printf("�ܹ���%d��ĩβΪ9������", count);
//	return 0;
//}