/// <ID>C012</ID>
/// <date>2020/11</date>
/// <summary>
/// 编程求以下级数前n项之和：
/// s = 1 - 1 / 3 + 1 / 5 - 1 / 7 + ...
/// </summary>
/// <input>1个正整数，级数的项数</input>
/// <output>实数，和</output>
/// <sample>
/// 25
/// 0.795394
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//Number of items in the series
	int n; //级数的项数

	(void)scanf("%d", &n);
	//Sum of series
	double s = 1; //级数的和

	int sign = -1; //正负号

	for (int i = 1; i < n; i++)
	{
		s += sign * 1 / (2 * (double)i + 1);
		sign = -1 * sign; //正负号反转
	}
	printf("%lf", s);
	return 0;
}
