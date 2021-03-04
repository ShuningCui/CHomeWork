/// <ID>C043</ID>
/// <date>2020/11</date>
/// <summary>
/// 输入任意的3个实数，这3个数相加，
/// 将相加的结果以及按四舍五入方法转换成整数后的结果显示输出
/// </summary>
/// <input>3个实数，空格分隔</input>
/// <output>和（%g输出），四舍五入后的整数，1行显示，空格分隔</output>
/// <sample>
/// 1.34 2.5 6.78
/// 10.62 11
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>01</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	double a, b, c;
	(void)scanf("%lf%lf%lf", &a, &b, &c);
	double sum = a + b + c;
	printf("%g %d", sum, (int)(sum + 0.5));
	return 0;
}
