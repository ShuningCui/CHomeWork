/*编写一个函数来判断一个正整数是否为回文数，若是则返回1，否则返回0。
所谓回文数是指各位数字左右对称的数，例如1221、3553等。该函数的原型为：
int ispalindrome(int n);
其中参数n是待判断的正整数，该函数有返回结果。
编写主函数，对上述函数进行测试，并找出1000∽n(1000 ≤ n < 10000)之间的所有回文数，
按从小到大的次序在屏幕上显示输出，每个数之间用一个空格分隔，最后一个数后面没有空格。

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int IsPalindrome(int n);
int main()
{
	int n;
	(void)scanf("%d", &n);
	int firstNum = 0;

	for (int i = 1000; i <= n; i++)
	{
		if (IsPalindrome(i))
		{
			firstNum++ == 0 ? printf("%d", i) : printf("% d", i);
		}
	}
	return 0;
}

/// <summary>
/// 判断一个数n是否是回文数
/// </summary>
/// <param name="n">输入的n</param>
/// <returns>是则返回1，否返回0</returns>
int IsPalindrome(int n)
{
	int resN = 0;
	int m = n;
	while (n)
	{
		resN = resN * 10 + n % 10;
		n /= 10;
	}
	return m==resN;
}
