/// <ID>C054</ID>
/// <date>2020/11</date>
/// <summary>
/// 有一分数序列如下： 2 / 1, 3 / 2, 5 / 3, 8 / 5, 13 / 8, 21 / 13, …
/// 即后一项的分母为前一项的分子，后项的分子为前一项分子与分母之和，求其前n项之和。
/// </summary>
/// <input>项数n（整数）</input>
/// <output>前n项之和（实数，注：保留4位小数）</output>
/// <sample>
/// 6
/// 10.0071
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int numerator = 2;
	int denominator = 1;
	double sum = (double)numerator / denominator;
	int n;
	(void)scanf("%d", &n);
	for (int i = 1; i < n; i++)
	{
		int temp = denominator;
		denominator = numerator;
		numerator += temp;
		sum += (double)numerator / denominator;
	}
	printf("%.4lf", sum);
	return 0;
}
