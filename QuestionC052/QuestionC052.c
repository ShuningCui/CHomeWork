/// <ID>C052</ID>
/// <date>2020/11</date>
/// <summary>
/// 整数分解为1和各个质因子的相乘，
/// </summary>
/// <input>1个正整数</input>
/// <output>分解的结果</output>
/// <sample>
/// 7
/// 1*7
/// </sample>
/// <sample>
/// 24
/// 1*2*2*2*3
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
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
