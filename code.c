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


int main()����1��+2��+....+n!
{
	int i = 1;
	int ret = 1;
	int sum = 0;
	int n = 0;
	scanf("%d", &n);���뺯������n��ֵ
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;��n�Ľ׳�
		sum = sum + ret;ʹ�����׳����
		printf("%d\n", i);��ӡ����ѭ����i��ֵ
		printf("%d\n", ret);��ӡ����ѭ����i�Ľ׳�
		printf("%d\n", sum);��ӡ����ѭ���н׳˵��ܺ�
	}

	return 0;
}

int main()���ַ������м���ʽ���ƶ�
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
int main()���ֲ����㷨�������������е�ĳ������n
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
			right = mid - 1; ��right--;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1; ��left++;
		}
		else
		{
			printf("�ҵ��ˣ��±���=%d\n", mid);
			break;
		}
	}
	while (left > right)
		printf("�Ҳ�����\n");
	return 0;
}








int main()����n�Ľ׳ˡ�
{
	int i=1;
	int ret=1;
	int n = 0;
	scanf("%d", &n);���뺯������n��ֵ��
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;ʹret��ֵ���ֶ�̬�仯 
		printf("%d\n", ret);
	}
	return 0;
}




int main()
{
	��ӡ100���ڵ�������
	int i;
	for (i = 0; i < 100; i++)
		if(i % 2 ==1)
		
	
	printf("%d\n", i);
	

	return 0;
	
}

