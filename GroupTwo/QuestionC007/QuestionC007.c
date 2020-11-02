/*找出m到n之间的所有同构数（m < n）。
说明：一个正整数x，如果是它平方数的尾部，则称x为同构数。
例如，6是其平方数36的尾部，2
5是其平方数625的尾部，那么6和25都是同构数。
输入：
输入m和n两个正整数，用空格分隔。
输出：
连续输出同构数，数据间用空格分隔。
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

/*
int IsomorphicNumber(int x, int xx);
int main()
{
	int m, n;
	
	(void)scanf("%d%d", &m, &n);
	int firstNum = 0;
	for (int i = m; i <= n; i++)
	{
		
		if (IsomorphicNumber(i, i * i))
		{
			if (firstNum == 0)
			{
				printf("%d", i);
				firstNum = 1;
			}
			else
			{
				printf(" %d", i);
			}
		}
		
	}
	return 0;
}

int IsomorphicNumber(int x, int xx)
{
	while (x && xx)
	{
		if (x % 10 != xx % 10)
		{
			return 0;
		}
		x = x / 10;
		xx = xx / 10;
	}
	return 1;
}

*/

int main()
{
	int m, n;
	(void)scanf("%d%d", &m, &n);
	int firstNum = 0;
	for (int i = m; i <= n; i++)
	{
		int a = log10(i) + 1;
		if ((i*i)%(int)(pow(10,a))==i)
		{
			firstNum++ == 0 ? printf("%d", i) : printf(" %d", i);
		}
	}
	return 0;
}
