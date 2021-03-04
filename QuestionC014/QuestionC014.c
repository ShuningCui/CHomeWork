/// <ID>C014</ID>
/// <date>2020/11</date>
/// <summary>
/// 找出[m, n]范围内是7的倍数或带7的全部正整数，m和n为正整数
/// </summary>
/// <input>2个正整数，m和n</input>
/// <output>若干行，按次序输出</output>
/// <sample>
/// 20 30
/// 21是7的倍数
/// 27是带7的数
/// 28是7的倍数
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
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
		//Check whether each bit has 7
		while (k)
		{
			if (k % 10 == 7)
			{
				printf("%d是带7的数\n", i);
				//As long as one is 7
				break; //只要有一个是7即可
			}
			k /= 10;
		}
	}
	return 0;
}
