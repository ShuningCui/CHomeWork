/*求[n, m]区间中的所有素数及素数的个数。
输入：n, m
输出：列出[n, m]中的所有素数，中间用一个空格隔开，最后显示素数的个数。
样例：
10 30
11 13 17 19 23 29 6
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int IsPrime(int x);

int main()
{
	int m, n;
	(void)scanf("%d%d", &n, &m);
	int sum = 0;
	for (int i = n; i <= m; i++)
	{
		if (IsPrime(i))
		{
			printf("%d ", i);
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