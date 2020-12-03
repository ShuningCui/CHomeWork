/*输入6个整数，用空格分隔。
*找出这6个整数中的所有素数，并对这些素数进行从小到大排序。
*若未找到素数，输出“NULL”
* 
* Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#define NUM 6

#include<stdio.h>

int IsPrime(int x);
void Bubble(int a[], int n);

int main()
{
	int primeNum = 0; //找到的素数的个数
	int prime[NUM]; //存放找到的素数
	for (int i = 0; i < NUM; i++)
	{
		int x;
		(void)scanf("%d", &x);
		if (IsPrime(x)) //如果是素数，放入数组
		{
			prime[primeNum++] = x;
		}
	}
	if (primeNum > 0)
	{
		Bubble(prime, primeNum); //排序
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

/// <summary>
/// 判断一个数是否是素数
/// </summary>
/// <param name="x">判断x是否是素数</param>
/// <returns>是则返回1，否则返回0</returns>
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

/// <summary>
/// 冒泡排序
/// </summary>
/// <param name="a">带排序的数组</param>
/// <param name="n">排序的个数</param>
void Bubble(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				int t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
	}
}
