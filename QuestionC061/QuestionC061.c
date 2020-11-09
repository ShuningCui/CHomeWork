/*
求n个数的最大公约数。2<=n<50
输入：n个正整数，以0作为数的结束。用空格隔开。
输出：最大公约数和这n个数，用一个空格隔开。
样例：
210 54 24 0
6 210 54 24
注：输入中，输入的数的个数是不确定的，不超过50，不小于2，最后的0是结束标志。
输出中，第1个数是它们的最大公约数，后面是输入的n个数，中间用一个空格隔开。
cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int inputNum[50];
	int i = 0;
	do
	{
		(void)scanf("%d", &inputNum[i]);
	} while (inputNum[i++]);

	int gcd = inputNum[0];
	while (gcd > 1)
	{
		int flag = 0;
		for (int n = 0; n < i - 1; n++)
		{
			if (inputNum[n] % gcd)
			{
				flag = 1;
				break;
			}
		}
		if (flag)
		{
			gcd--;
		}
		else
		{
			break;
		}
	}
	printf("%d", gcd);
	for (int n = 0; n < i - 1; n++)
	{
		printf(" %d", inputNum[n]);
	}

	return 0;
}
