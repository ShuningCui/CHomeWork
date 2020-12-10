/*计算函数的值, n为整数，f(n)定义如下：
 *（1）当 n >= 0 且 n <= 4 时，   f(n) = 1
 *（2）当 n > 4 且n为偶数 时， f(n) = f(n - 1) + f(n - 3)
 *（3）当 n > 4 且n为奇数 时， f(n) = f(n - 2) + f(n - 4)
 *（4）n为其它值时， f(n) = -1
 *输入自变量n，输出函数结果。
 *
 *Cui Shuning (崔舒宁）2020/11
 */

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int f(int n);

int main()
{
	int n;
	(void)scanf("%d", &n);
	int s = f(n);
	printf("%d\n", s);
	return 0;
}

#pragma warning(disable:6001)
/// <summary>
/// 按题目要求定义的递归函数
/// </summary>
/// <param name="n">参数</param>
/// <returns></returns>
int f(int n)
{
	int i;
	if (n >= 0 && n <= 4)
	{
		i = 1;
	}
	if (n > 4 && n % 2 == 0)
	{
		i = f(n - 1) + f(n - 3);
	}
	if (n > 4 && n % 2 == 1)
	{
		i = f(n - 2) + f(n - 4);
	}
	if (n < 0)
	{
		i = -1;
	}
	return i;
}
