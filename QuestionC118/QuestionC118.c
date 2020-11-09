/*若一个自然数是素数，且它的各位数字的位置经过逆序后仍为素数，
则称其是绝对素数。例如13和31都是素数，
所以它们也是绝对素数。输入1个两位正整数，
判断其是否为绝对素数。如果是，则输出YES，否则输出NO。
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int IsPrime(int x);
int ResverseInt(int x);

int main()
{
	int x;
	(void)scanf("%d", &x);
	printf("%s", IsPrime(x) && IsPrime(ResverseInt(x)) ? "YES" : "NO");
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

/// <summary>
/// 反转一个整数，如1234变为4321
/// </summary>
/// <param name="x">待反转的整数</param>
/// <returns>反转的结果</returns>

int ResverseInt(int x)
{
	int n = 0;
	while (x)
	{
		n = n * 10 + x % 10;
		x /= 10;
	}
	return n;
}
