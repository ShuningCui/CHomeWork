//C052 - 该整数分解为1和各个质因子的相乘
//Cui Shuning (崔舒宁）2020/11

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, i;
	(void)scanf("%d", &n);

	printf("1");
	for (i = 2; i <= n; i++)
	{
		while (n % i == 0) //是质数
		{
			printf("*%d", i);
			n = n / i;
		}
	}
	return 0;
}
