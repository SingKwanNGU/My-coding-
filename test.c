#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main()计算两个数的最大公约数
{
	int m = 0;
	int n = 0;
	int r = 0;
	int a = 0;
	scanf("%d%d", &m, &n);
	if (m < n)置换大小顺序，m大n小
	{
		a = m;
		m = n;
		n = a;
	}
	while (m % n) 辗转相除法求最大公约数
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("%d\n", n);

	return 0;
}
int main()打印1000-2000以内的闰年
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{

		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)能被4整除但不能被100整除或能被400整除
		{
			printf("%d ", year);
			count++;计数
	}

	}
	printf("\ncount=%d", count);
	return 0;
}
int main()打印100-200以内的素数并计数
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)直接从奇数开始挑选 偶数直接去除
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)只要找不到2-该数的开方以内的任意一个数能整除此数，则此数为素数
		{
			if (i % j == 0)每次遇到整除的数，就跳出循环
			{
				break;
			}
		}
		if (j > sqrt(i))每次遇到素数，计数+1
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d", count);
	return 0;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)打印个位为9的数字
		{
			count++;
			printf("%d ", i);
		}
		if (i / 10 == 9)打印十位为9的数字
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}
int main()计算1/1-1/2+1/3-1/4+...-1/100.
{
	int i = 0;
double sum = 0.0;
int flag = 1;
for (i = 1; i <= 100; i++)
{
	sum += flag * 1.0 / i;
	flag = -flag;奇数+号，偶数-号（或奇数组求和，偶数组求和再相加）
}
printf("%f\n", sum);
	return 0;
}
int main()求10个数里的最大值
{
	int arr[] = {-1,2,3,4,5,6,7,8,9,10};
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}
int main()打印九九乘法表
{
	int i = 1;
	int j = 1;
	
	for (i = 1; i <= 9; i++)
	{
		int m = 1;
		for(j=1;j<=i;j++)
		{
			m = i * j;
			printf("%d*%d=%2d ",i,j, m); %2d向右对齐 %-2d向左对齐
		}
		printf("\n");
	}

	
	return 0;
}

void game()猜数字游子 -开口中
{
	int ret = 0;存入随机数的变量
	int guess = 0;存入猜数的变量
	ret = rand() % 100 + 1;
	while (1) --恒为真 一直循环直至猜中
	{

		printf("请猜数字:>");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("猜小了\n");
		}
		else if (ret < guess)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜中了\n");
			break;
		}
	}
}
void menu()
{
	printf("********************************\n");
	printf("*****1.play     0.exit**********\n");
	printf("********************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL))拿时间戳来设置随机数的生成起点，随机生成0-32676之间的一个整数；NUll为空指针；
	do
	{
		menu();
		printf("请选择>;");
		scanf("%d", &input);
		switch (input)
		{
		case(1):
			game();
			break;
		case(0):
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);只要输入非0，恒为真都能继续循环，   输入0则退出游戏
	return 0;
}