#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main()���������������Լ��
{
	int m = 0;
	int n = 0;
	int r = 0;
	int a = 0;
	scanf("%d%d", &m, &n);
	if (m < n)�û���С˳��m��nС
	{
		a = m;
		m = n;
		n = a;
	}
	while (m % n) շת����������Լ��
	{
		r = m % n;
		m = n;
		n = r;
	}
	printf("%d\n", n);

	return 0;
}
int main()��ӡ1000-2000���ڵ�����
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{

		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)�ܱ�4���������ܱ�100�������ܱ�400����
		{
			printf("%d ", year);
			count++;����
	}

	}
	printf("\ncount=%d", count);
	return 0;
}
int main()��ӡ100-200���ڵ�����������
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)ֱ�Ӵ�������ʼ��ѡ ż��ֱ��ȥ��
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)ֻҪ�Ҳ���2-�����Ŀ������ڵ�����һ���������������������Ϊ����
		{
			if (i % j == 0)ÿ����������������������ѭ��
			{
				break;
			}
		}
		if (j > sqrt(i))ÿ����������������+1
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
		if (i % 10 == 9)��ӡ��λΪ9������
		{
			count++;
			printf("%d ", i);
		}
		if (i / 10 == 9)��ӡʮλΪ9������
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}
int main()����1/1-1/2+1/3-1/4+...-1/100.
{
	int i = 0;
double sum = 0.0;
int flag = 1;
for (i = 1; i <= 100; i++)
{
	sum += flag * 1.0 / i;
	flag = -flag;����+�ţ�ż��-�ţ�����������ͣ�ż�����������ӣ�
}
printf("%f\n", sum);
	return 0;
}
int main()��10����������ֵ
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
int main()��ӡ�žų˷���
{
	int i = 1;
	int j = 1;
	
	for (i = 1; i <= 9; i++)
	{
		int m = 1;
		for(j=1;j<=i;j++)
		{
			m = i * j;
			printf("%d*%d=%2d ",i,j, m); %2d���Ҷ��� %-2d�������
		}
		printf("\n");
	}

	
	return 0;
}

void game()���������� -������
{
	int ret = 0;����������ı���
	int guess = 0;��������ı���
	ret = rand() % 100 + 1;
	while (1) --��Ϊ�� һֱѭ��ֱ������
	{

		printf("�������:>");
		scanf("%d", &guess);
		if (ret > guess)
		{
			printf("��С��\n");
		}
		else if (ret < guess)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬������\n");
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
	srand((unsigned int)time(NULL))��ʱ����������������������㣬�������0-32676֮���һ��������NUllΪ��ָ�룻
	do
	{
		menu();
		printf("��ѡ��>;");
		scanf("%d", &input);
		switch (input)
		{
		case(1):
			game();
			break;
		case(0):
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);ֻҪ�����0����Ϊ�涼�ܼ���ѭ����   ����0���˳���Ϸ
	return 0;
}