//闰年计算。程序输入一个正整数Y，以及另一个正整数N，
//以一个空格分隔。计算从Y年开始后的第N个闰年是哪一年
//（如果Y本身是闰年，则Y之后的第一个闰年是Y）。
//cuishuning 2020/11
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int IsLeapyear(int year);

int main()
{
	int year, n;
	(void)scanf("%d%d", &year, &n);
	int i = 0;
	while (i < n)
	{
		if (IsLeapyear(year))
		{
			i++;
		}
		year++;
	}

	printf("%d", year - 1);
	return 0;
}

/// <summary>
/// 判断是否为闰年
/// </summary>
/// <param name="year">年份</param>
/// <returns>是，返回1，否，0</returns>
int IsLeapyear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
