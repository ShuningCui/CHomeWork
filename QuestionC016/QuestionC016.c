/*若三个正整数a, b, c满足 a ^ 2 + b ^ 2 = c ^ 2，则它们是一组勾股数。(^ 2表示平方，a ^ 表示a的平方)。
编写程序，求给定区间[m, n]中的勾股数的数量(设一组勾股数满足a < b < c)。例如[1, 10]中的勾股数有(3, 4, 5)和(6, 8, 10)，则[1, 10]中勾股数的数量为2.
输入：正整数m, n, m, n > 0.
输出：[m, n]中的勾股数的数量
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int i, j, k, m, n;
	int sum = 0;
	scanf("%d%d", &m, &n);
	for (i = m; i <= n; i++)
		for (j = i + 1; j <= n; j++)
			for (k = j + 1; k <= n; k++)
				if (k * k == i * i + j * j)
				{
					sum++;
				}

	printf("%d\n", sum);
	return 0;
}
