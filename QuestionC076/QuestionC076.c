/*有一个包含奇数个项的整数序列，请编程按照以下规则排序：
最大值排在中间，最小值排在最左，中值排在最右，其它值清为0。
输入2行，第一行n表示要输入的数的个数，n是奇数。第二行输入的n个数。
输出，排序后的数组，数据空格分隔，最后一个数据后面没有空格
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void Bubble(int a[], int n);

int main()
{
	int n;
	scanf("%d", &n);
	int a[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	Bubble(a, n);
	int min = a[0];
	int mid = a[n / 2];
	int max = a[n - 1];
	//清0并输出
	printf("%d", a[0]);
	for (int i = 1; i < n; i++)
	{
		if (i == n / 2)
		{
			a[i] = max;
		}
		else if (i == n - 1)
		{
			a[i] = mid;
		}
		else
		{
			a[i] = 0;
		}
		printf(" %d", a[i]);
	}
	return 0;
}

/// <summary>
/// 冒泡排序(从小到大）
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
