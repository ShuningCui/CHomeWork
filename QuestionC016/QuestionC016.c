/// <ID>C016</ID>
/// <date>2020/11</date>
/// <summary>
/// 若三个正整数a, b, c满足 a ^ 2 + b ^ 2 = c ^ 2，则它们是一组勾股数。
/// 编写程序，求给定区间[m, n]中的勾股数的数量(设一组勾股数满足a < b < c)
/// </summary>
/// <input>正整数m, n, m, n > 0</input>
/// <output>[m, n]中的勾股数的数量</output>
/// <sample>
/// 2 30
/// 11
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//Loop control variable
	//循环控制变量
	int i, j, k;
	//输入 input
	int m, n;
	//计数 count
	int sum = 0;
	(void)scanf("%d%d", &m, &n);
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
