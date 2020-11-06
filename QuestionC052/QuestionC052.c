//C052 - 该整数分解为1和各个质因子的相乘

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	printf("1");
	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			printf("*%d", i);
			n = n / i;
		}
	}
	return 0;
}