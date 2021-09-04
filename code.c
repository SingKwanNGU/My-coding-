#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>

int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	//int a = 100;
	//int b = 200;
	sum = num1 + num2;
	sum = Add(num1, num2);
	/*sum = Add(a, b);*/
	printf("sum =%d\n", sum);
	return 0;
}


int main()计算1！+2！+....+n!
{
	int i = 1;
	int ret = 1;
	int sum = 0;
	int n = 0;
	scanf("%d", &n);输入函数输入n的值
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;求n的阶乘
		sum = sum + ret;使各个阶乘相加
		printf("%d\n", i);打印当此循环中i的值
		printf("%d\n", ret);打印当此循环中i的阶乘
		printf("%d\n", sum);打印当此循环中阶乘的总和
	}

	return 0;
}

int main()让字符串向中间汇聚式的移动
{
	char arr1[] = "welcome to world";
	char arr2[] = "################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		Sleep(1000);
		system("cls");
		printf("%s\n", arr2);
		left++;
		right--;
	}
	return 0;
}
int main()二分查找算法查找有序数组中的某个数字n
{
	int arr[] = { 1,2,3,4,5,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr)/ sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1; 或right--;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1; 或left++;
		}
		else
		{
			printf("找到了，下标是=%d\n", mid);
			break;
		}
	}
	while (left > right)
		printf("找不到了\n");
	return 0;
}








int main()计算n的阶乘。
{
	int i=1;
	int ret=1;
	int n = 0;
	scanf("%d", &n);输入函数输入n的值。
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;使ret的值保持动态变化 
		printf("%d\n", ret);
	}
	return 0;
}




int main()
{
	打印100以内的奇数。
	int i;
	for (i = 0; i < 100; i++)
		if(i % 2 ==1)
		
	
	printf("%d\n", i);
	

	return 0;
	
}

