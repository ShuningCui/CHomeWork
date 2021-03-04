/// <ID>C001</ID>
/// <date>2020/11</date>
/// <summary>
/// 从键盘输入一个小于等于1000的正整数x
/// 输出其平方根（为整数）。若输入数大于1000
/// 则输出0，并继续接受下一个输入直至小于等于1000
/// </summary>
/// <input>1个整数</input>
/// <output>若干行，0或者平方根</output>
/// <sample>
/// 1200
/// 0
/// 1000
/// 31
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	unsigned x;
	(void)scanf("%u", &x); //输入正整数 input a Positive integer
	while (x > 1000)
	{
		printf("0\n");
		(void)scanf("%u", &x); //接受下一个输入 Accept next input
	}
	printf("%d\n", (int)sqrt(x));
	return 0;
}
