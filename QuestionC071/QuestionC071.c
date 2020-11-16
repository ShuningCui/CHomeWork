/*输入n,m,正整数，n<=m, 
找出[n, m]区间内各位数字都不同并且能被3,5,7整除的偶数。
输入：正n, m，用空格隔开，n <= m.
输出：若干符合条件的数，以一个空格隔开。
区间内没有满足条件的数时显示 - 1.
样例1：
100 500
210 420
样例2：
100 200
- 1

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int IsDifferent(int x);
int main()
{
	int n, m;
	const int step = 2 * 3 * 5 * 7;
	(void)scanf("%d%d", &n, &m);
	int sum = 0;
	int k = 1;
	while (n > k * step)
	{
		k++;
	}

	for (int i = k * step; i <= m; i += step)
	{
		if (IsDifferent(i))
		{
			sum++ == 0 ? printf("%d", i) : printf(" %d", i);
		}
	}

	if (sum == 0)
	{
		printf("-1");
	}
	return 0;
}
/// <summary>
/// 判断整数x的各个位是否有相同的
/// </summary>
/// <param name="x">整数x</param>
/// <returns>没有相同的位返回1，否则返回0</returns>
int IsDifferent(int x)
{
	int num = 0;
	int a[100];
	while (x)
	{
		a[num++] = x % 10;
		x /= 10;
	}

	for (int i = 0; i < num-1; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			if (a[i] == a[j])
			{
				return 0;
			}
				
		}
	}
	return 1;
}
