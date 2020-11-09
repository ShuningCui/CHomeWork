//找出[m, n]范围内是7的倍数或带7的全部正整数，m和n为正整数。
//cuishuning 2020/11

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

		//检查每一位是否有7
		while (k)
		{
			if (k % 10 == 7)
			{
				printf("%d是带7的数\n", i);
				break;   //只要有一个是7即可
			}
			k /= 10;
		}
	}
	return 0;
}