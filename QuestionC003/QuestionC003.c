/*读取3个数（1~10）的整数值，每读取一个值，程序打印出该值个数的英文星号("""" * """")。
输入：3个整数，3行。
输出：3行星号。

cuishuning 2020/11
*/

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
