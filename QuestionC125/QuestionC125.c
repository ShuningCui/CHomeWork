//输入6个整数，用空格分隔。
//找出这6个整数中的所有素数，并对这些素数进行从小到大排序。
//若未找到素数，输出“NULL”

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define NUM 6

int IsPrime(int x);
void Bubble(int a[], int n);
int main()
{
	int primeNum = 0;
	int prime[NUM];
	for (int i = 0; i < NUM; i++)
	{
		int x;
		(void)scanf("%d", &x);
		if (IsPrime(x))
		{
			prime[primeNum++] = x;
		}
	}
	if (primeNum > 0)
	{
		Bubble(prime, primeNum);
		printf("%d", prime[0]);
		for (int i = 1; i < primeNum; i++)
		{
			printf(" %d", prime[i]);
		}
	}
	else
	{
		printf("NULL");
	}
	return 0;
}

int IsPrime(int x)
{
	for (int i = 2; i <= x / i; i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

void Bubble(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				int t = a[j];
				a[j] = a[j-1];
				a[j - 1] = t;
			}
		}
	}
}
