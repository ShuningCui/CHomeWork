//输入一个整数n(n >= 2)，判断n是否为素数。
//是素数输出 "YES", 否则输出 "NO"。
//Cui Shuning (崔舒宁）2020/11

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int IsPrime(int x);

int main()
{
	int n;
	(void)scanf("%d", &n);
	printf("%s", IsPrime(n) ? "YES" : "NO");
	return 0;
}

/// <summary>
/// 判断一个整数是否是素数
/// </summary>
/// <param name="x">判断的数</param>
/// <returns>是，则返回1，否则返回0</returns>
int IsPrime(int x)
{
	for (int i = 2; i <= x / i; i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}
