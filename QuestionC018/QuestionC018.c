/// <ID>C018</ID>
/// <date>2020/11</date>
/// <summary>
/// 输入任意一个正整数，计算各位数字的平方和
/// 1234 则：计算1 * 1 + 2 * 2 + 3 * 3 + 4 * 4 = 30
/// </summary>
/// <input>1个正整数</input>
/// <output>1个正整数</output>
/// <sample>
/// 1234
/// 30
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	unsigned x;
	(void)scanf("%u", &x);
	int sum = 0;
	while (x)
	{
		sum = sum + (x % 10) * (x % 10);
		x = x / 10;
	}
	printf("%d", sum);
	return 0;
}
