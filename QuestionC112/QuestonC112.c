/*从键盘输入两个正整数m和n，然后从m + 1开始找出大于m的n个素数。
输入：m, n
输出：n个素数，数据间以一个空格分隔。

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int IsPrime(int x);

int main()
{
	int m, n;
	(void)scanf("%d%d", &m, &n);
	int num = 0;
	while (num < n)
	{
		while (IsPrime(++m) == 0);
		num++ == 0 ? printf("%d", m) : printf(" %d", m);
	}
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