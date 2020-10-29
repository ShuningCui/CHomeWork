//找出[m, n]范围内是7的倍数或带7的全部正整数，m和n为正整数。

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int m, n;
	(void)scanf("%d%d", &m, &n);

	for (int i = m; i <= n; i++)
	{
		if (i % 7 == 0)
		{
			printf("%d是7的倍数\n", i);
		}
		int k = i;
		while (k)
		{
			if (k % 10 == 7)
			{
				printf("%d是带7的数\n", i);
				break;
			}
			k /= 10;
		}
	}
	return 0;
}