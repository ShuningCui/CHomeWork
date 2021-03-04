/// <ID>C003</ID>
/// <date>2020/11</date>
/// <summary>
/// 读取3个数（1~10）的整数值，每读取一个值，程序打印出该值个数的英文星号(*)
/// </summary>
/// <input>3个整数，3行</input>
/// <output>3行星号</output>
/// <sample>
/// 2
/// 3
/// 4
/// **
/// ***
/// ****
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int one, two, three;
	(void)scanf("%d%d%d", &one, &two, &three);

	for (int i = 0; i < one; i++)
	{
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < two; i++)
	{
		printf("*");
	}
	printf("\n");
	for (int i = 0; i < three; i++)
	{
		printf("*");
	}
	printf("\n");
	return 0;
}
