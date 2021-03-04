/// <ID>C005</ID>
/// <date>2020/11</date>
/// <summary>
/// 请输入一个8位的十进制整数，
/// 编写程序取出该整数的中间4位数，
/// 分别输出取出的这4位数以及该4位数加上1024的得数。
/// </summary>
/// <input>一个整数</input>
/// <output>两个整数，用空格分隔</output>
/// <sample>
/// 12233478
/// 2334 3358
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>01</difficulty>

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int eightDigitalInteger;
	(void)scanf("%d", &eightDigitalInteger);
	//取出中间4位数字
	//Take out the middle 4 digits
	int midFour = (eightDigitalInteger / 100) % 10000;
	printf("%d %d\n", midFour, midFour + 1024);
	return 0;
}
