/*给定N个“分子 / 分母”形式的有理数，计算这些分数的和。
输入格式：第一行输入一个正整数N（ <= 100），然后下一行N个有理数“a1 / b1 a2 / b2…”，其中所有的分子和分母都在“int”的范围内。如果有负数，则符号必须出现在分子的前面。
输出格式：输出最简单形式的和，“整数 分子 / 分母”，其中“整数”是和的整数部分，“分子” < “分母”，分子和分母没有公因数。如果整数部分为0，则必须仅输出小数部分。如果结果是一个整数，则仅输出该整数且后面没有空格。如：
2
1 / 2 1 / 2
1
3
- 1 / 2 - 1 / 2 - 1 / 2
- 1 1 / 2

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

typedef struct _frac
{
	int numerator; //分子
	int denominator; //分母
} Frac;

Frac Add(Frac x, Frac y);
int Gcd(int x, int y);

int main()
{
	int n;
	Frac sum = {0, 1};
	Frac x;
	(void)scanf("%d", &n);
	char ch;
	for (int i = 0; i < n; i++)
	{
		(void)scanf("%d%c%d", &x.numerator, &ch, &x.denominator);
		sum = Add(sum, x);
	}

	//输出
	if (sum.numerator < 0)
	{
		printf("-");
		sum.numerator = -sum.numerator;
	}
	if (sum.denominator == 1)
	{
		printf("%d", sum.numerator);
	}
	else
	{
		if (sum.numerator > sum.denominator)
		{
			int integer = sum.numerator / sum.denominator;
			sum.numerator = sum.numerator
				- sum.denominator * integer;
			printf("%d %d/%d", integer, sum.numerator
			       , sum.denominator);
		}
		else
		{
			printf("%d/%d", sum.numerator, sum.denominator);
		}
	}
	return 0;
}

Frac Add(Frac x, Frac y)
{
	Frac z;
	z.denominator = x.denominator * y.denominator;
	z.numerator = x.denominator * y.numerator
		+ x.numerator * y.denominator;
	int gcd = Gcd(z.denominator, z.numerator);
	z.denominator = z.denominator / gcd;
	z.numerator = z.numerator / gcd;
	return z;
}

int Gcd(int x, int y)
{
	int gcd = x;
	while (x % gcd || y % gcd)
	{
		gcd--;
	}
	return gcd;
}
