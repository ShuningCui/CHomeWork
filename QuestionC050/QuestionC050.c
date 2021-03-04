/// <ID>C050</ID>
/// <date>2020/11</date>
/// <summary>
/// 编写程序检验由三边能否构成三角形，检验方法是任意两边和均要大于第三边
/// </summary>
/// <input>三边长度，实数，空格分割</input>
/// <output>若果可以构成，输出YES，否则输出ERROR DATA</output>
/// <sample>
/// 1.1 1.1 1.1
/// YES
/// </sample>
/// <sample>
/// 1 2 30
/// ERROR DATA
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>01</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	double a, b, c;
	(void)scanf("%lf%lf%lf", &a, &b, &c);

	printf(a + b > c && b + c > a && c + a > b ? "YES" : "ERROR DATA");

	return 0;
}
