/// <ID>C126</ID>
/// <date>2020/11</date>
/// <summary>
/// 编写一个函数来判断一个正整数是否为回文数，若是则返回1，否则返回0。
/// 所谓回文数是指各位数字左右对称的数，例如1221、3553等。该函数的原型为：
/// int ispalindrome(int n);
/// 其中参数n是待判断的正整数，该函数有返回结果。
/// 编写主函数，对上述函数进行测试，并找出1000∽n(1000 ≤ n < 10000)之间的所有回文数，
///	按从小到大的次序在屏幕上显示输出，每个数之间用一个空格分隔，最后一个数后面没有空格。
/// <input>n</input>
/// <output>回文数</output>
/// <sample>
/// 8234
/// 1001 1111 1221 1331 1441 1551 1661 1771
/// 1881 1991 2002 2112 2222 2332 2442 2552
/// 2662 2772 2882 2992 3003 3113 3223 3333
/// 3443 3553 3663 3773 3883 3993 4004 4114
/// 4224 4334 4444 4554 4664 4774 4884 4994
/// 5005 5115 5225 5335 5445 5555 5665 5775
/// 5885 5995 6006 6116 6226 6336 6446 6556
/// 6666 6776 6886 6996 7007 7117 7227 7337
/// 7447 7557 7667 7777 7887 7997 8008 8118 8228
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>03</difficulty>
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
	return m == resN;
}
