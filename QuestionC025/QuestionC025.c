/*计算级数
*2 / 1, -3 / 2, 5 / 3, -8 / 5, ...
*的前n项和。
*级数的特点是：（1）若先不考虑符号，则前一项的分子是后一项的分母，
*前一项的分子分母之和为后一项的分子。（2）级数各项的正负号交错。
*输入：项数n, 0 < n < 100.
*输出：前n项的和，格式"%f"。

* Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	(void)scanf("%d", &n);
	float sum = 0;
	long long numerator = 2;
	long long denominator = 1;
	int sign = 1;

	for (int i = 0; i < n; i++)
	{
		sum = sum + sign * (float)numerator / denominator;
		sign = -sign;
		long long temp = numerator;
		numerator = numerator + denominator;
		denominator = temp;
	}

	printf("%f", sum);
	return 0;
}
