/// <ID>C017</ID>
/// <date>2020/11</date>
/// <summary>
/// 输入整数a和b，若a* a + b * b大于等于100，
/// 则输出a * a + b * b百位及以上的数字，
/// 否则输出a * a + b * b
/// </summary>
/// <input>两个整数</input>
/// <output>一个整数</output>
/// <sample>
/// 6 7
/// 85
/// </sample>
/// <sample>
/// 12 34
/// 13
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>01</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, b;
	(void)scanf("%d%d", &a, &b);
	int c = a * a + b * b;
	printf("%d", c >= 100 ? c / 100 : c);
	return 0;
}
