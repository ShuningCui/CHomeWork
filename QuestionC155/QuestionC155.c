/*输入n及n个正整数，对偶数从小到大排序，对奇数从大到小排序，输出从小到大的偶数，再输出从大到小的奇数，在一行中，用一个空格隔开。
输入：n及n个正整数, 用空格隔开。
输出：输出从小到大的偶数，再输出从大到小的奇数，用一个空格隔开
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void Bubble(int a[], int n);

int main()
{
	int n;
	int a[100];
	(void)scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		(void)scanf("%d", &a[i]);
	}
	int b[100];
	int c[100];
	//选出偶数放入b并排序（从小到大）
	//奇数放入c
	int nb = 0;
	int nc = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			b[nb++] = a[i];
		}
		else
		{
			c[nc++] = a[i];
		}
	}
	Bubble(b, nb);
	for (int i = 0; i < nb; i++)
	{
		printf("%d ", b[i]);
	}
	Bubble(c, nc);
	printf("%d", c[nc - 1]);
	for (int i = nc - 2; i >= 0; i--)
	{
		printf(" %d", c[i]);
	}
	return 0;
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