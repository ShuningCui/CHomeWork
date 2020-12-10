/*任意输入一个自然数，将该数乘以3，
 *输出乘积和乘积中各位数字组成的最大数。
 *例如，输入 5370 ，乘3结果为16110，则输出为 16110, 61110 。
 *输入格式： 自然数 n
 *输出格式： 乘3结果和乘积中各位数字组成的最大数，用英文逗号隔开。
 *
 *Cui Shuning (崔舒宁）2020/11
 */

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int IntToDigital(int n, int* num);
void Bubble(int* a, int n);

int main()
{
	int n;
	(void)scanf("%d", &n);
	n = n * 3;
	printf("%d,", n);
	int num[30];
	int m = IntToDigital(n, num);
	Bubble(num, m);
	for (int i = m - 1; i >= 0; i--)
	{
		printf("%d", num[i]);
	}
	return 0;
}
/// <summary>
/// 将一个整数分解成各个数字存入数组
/// </summary>
/// <param name="n">分解的整数</param>
/// <param name="num">存入结果的数组</param>
/// <returns>分解的位数（即整数n的位数）</returns>
int IntToDigital(int n, int* num)
{
	int i = 0;
	while (n)
	{
		num[i++] = n % 10;
		n /= 10;
	}
	return i;
}

/// <summary>
/// 冒泡排序
/// </summary>
/// <param name="a">带排序的数组</param>
/// <param name="n">排序的个数</param>
void Bubble(int* a, int n)
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
