/// <ID>C061</ID>
/// <date>2020/11</date>
/// <summary>
/// 求n个数的最大公约数。2<=n<50
/// </summary>
/// <input>n个正整数，以0作为数的结束。用空格隔开。</input>
/// <output>最大公约数和这n个数，用一个空格隔开。</output>
/// <sample>
/// 210 54 24 0
/// 6 210 54 24
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>03</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int inputNum[50];
	int i = 0;
	do
	{
		(void)scanf("%d", &inputNum[i]);
	}
	while (inputNum[i++]);
	
	int gcd = inputNum[0];
	int flag = 1;
	while (flag)
	{
		flag = 0;
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
	}
	printf("%d", gcd);
	for (int n = 0; n < i - 1; n++)
	{
		printf(" %d", inputNum[n]);
	}

	return 0;
}
