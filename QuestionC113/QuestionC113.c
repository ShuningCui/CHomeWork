/*所谓孪生素数是指间隔为 2 的相邻素数，
例如最小的孪生素数是3和5, 5和7也是孪生数。
编写程序，求给定区间[m, n]中的孪生数的数量。
例如[2, 10]中的孪生数有(3, 5)和(5, 7)，则[2, 10]中孪生数的数量为2.
输入：正整数m, n, m, n > 1.
输出：[m, n]中的孪生的数量

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int IsPrime(int x);

int main()
{
	int m, n;
	(void)scanf("%d%d", &m, &n);
	int sum = 0;

	for (int i = m; i <= n - 2; i++)
	{
		if (IsPrime(i) && IsPrime(i + 2))
		{
			sum++;
		}
	}

	printf("%d", sum);
	return 0;
}

/// <summary>
/// 判断一个整数是否是整数
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
