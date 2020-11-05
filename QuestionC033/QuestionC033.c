//输入整数n >= 1, 计算下式的值。
//s = 1 + 1 / (1 + 2) + 1 / (1 + 2 + 3) + … + 1 / (1 + 2 + 3 + … + n)

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	float sum=0;
	float denominator = 1;
	(void)scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		sum = sum + (1 / denominator);
		denominator = denominator + i + 2;
	}
	printf("%lf", sum);
	return 0;
}