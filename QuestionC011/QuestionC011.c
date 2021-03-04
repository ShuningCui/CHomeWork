/// <ID>C011</ID>
/// <date>2020/11</date>
/// <summary>
/// 编程判断任意一个正整数各位数字之和是奇数还是偶数
/// 如果是奇数输出1，偶数输出0
/// </summary>
/// <input>1个正整数</input>
/// <output>0或1</output>
/// <sample>
/// 123
/// 0
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
	//分解x的每一位并相加
	//Decompose each bit of x and add
	while (x)
	{
		sum += x % 10;
		x /= 10;
	}

	printf("%d", sum % 2 == 0 ? 0 : 1);
	return 0;
}
