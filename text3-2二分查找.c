#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{

		printf("请输入密码:>");
		scanf("%s", &password);
		//getchar();
		if (strcmp(password, "123456") == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else
			printf("密码错误！\n");
	}
	if (i == 3)
		printf("三次密码均错误，请退出\n");
	return 0;
}

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	char arr1[] = "welcom to bit !!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (right >= left)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");					//清空屏幕
//		right--;
//		left++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int low = 0;
//	int high = sz - 1;
//	int k = 0;
//	scanf("%d", &k);
//	while (high >= low)
//	{
//		int mid = (low + high) / 2;
//		if (arr[mid] > k)
//			high = mid - 1;
//		else if (arr[mid] < k)
//			low = mid + 1;
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//	if (low > high)
//		printf("找不到\n");
//	return 0;
//}