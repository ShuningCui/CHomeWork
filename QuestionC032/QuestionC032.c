/// <ID>C032</ID>
/// <date>2020/11</date>
/// <summary>
/// 水仙花数”是指一个三位正整数，其各位数字的立方和确好等于该数本身
/// 如：153＝1 ^ 3＋5 ^ 3＋3 ^ 3
/// n, m，100 <= n, m < 1000, 求出[n, m]之间的水仙花数。若该区间没有水仙花数，输出 - 1.
/// </summary>
/// <input>n, m，用空格隔开</input>
/// <output>若干水仙花数，用空格隔开</output>
/// <sample>
/// 100 500
/// 153 370 371 407
/// </sample>
/// <sample>
/// 100 120
/// -1
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n, m;
	(void)scanf("%d%d", &n, &m);
	int firstFind = 0;
	for (int i = n; i <= m; i++)
	{
		int i0 = i % 10;
		int i1 = (i / 10) % 10;
		int i2 = i / 100;
		if (i == i0 * i0 * i0 + i1 * i1 * i1 + i2 * i2 * i2)
		{
			firstFind++ == 0 ? printf("%d", i) : printf(" %d", i);
		}
	}
	if (firstFind == 0)
	{
		printf("-1");
	}
	return 0;
}
