#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int is_prime(int n)
//{
//	int a = 0;
//	for (a = 2; a <= sqrt(n); a++)
//	{
//		if (n % a == 0)
//		{
//			return 0;
//		}
//
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//
//	}
//	return 0;
//}

//int prime(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (prime(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//}


//int num = 0;
//int game(int x)
//{
//	num = num + 1;
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		game(a);
//		printf("%d", num);
//	}
//	return 0;
//}



int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
int find(int x)
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (mid > x)
		{
			right = mid - 1;
		}
		else if (mid < x)
		{
			left = mid + 1;
		}
		else
		{
			printf("%d",mid-1);
			return 0;
		}
	}
	if (left > right)
		printf("’“≤ªµΩ¡À");
	return 0;
}
int main()
{
	int a = 7;
	find(arr[a]);
	return 0;
}



