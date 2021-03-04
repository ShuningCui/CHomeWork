/// <ID>C042</ID>
/// <date>2020/11</date>
/// <summary>
/// 从键盘输入任意3个整数，然后输出这3个数的平均值
/// </summary>
/// <input>3个整数</input>
/// <output>一个实数（使用%g输出）</output>
/// <sample>
/// 6 7 12
/// 8.33333
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>01</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//输入3个数
	//input three numbers
	int a, b, c;
	(void)scanf("%d%d%d", &a, &b, &c);
	printf("%g", (float)(a + b + c) / 3);
	return 0;
}
