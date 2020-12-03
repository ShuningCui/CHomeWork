/*输入任意一个正整数，计算各位数字的平方和。
*如：1234 则：计算1 * 1 + 2 * 2 + 3 * 3 + 4 * 4 = 30
*输入：一个正整数。
*输出：整数

* Cui Shuning (崔舒宁）2020/11
*/

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
