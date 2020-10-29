//编程求以下级数前n项之和：
//s = 1 - 1 / 3 + 1 / 5 - 1 / 7 + ...

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	(void)scanf("%d", &n);
	double s = 1;
	int sign = -1;
	for (int i = 1; i < n; i++)
	{
		s += sign * 1 / (2 * (double)i + 1);
		sign = -1 * sign;
	}
	printf("%lf", s);
	return 0;
}