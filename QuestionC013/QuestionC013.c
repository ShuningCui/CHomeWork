/// <ID>C013</ID>
/// <date>2020/11</date>
/// <summary>
/// 将一个大于4的正整数分解为连续的正整数之和
/// 分解结果不唯一，输出所有的可能
/// </summary>
/// <input>一个正整数</input>
/// <output>若干分解结果，按次序输出</output>
/// <sample>
/// 24
/// 24=7+8+9
/// </sample>
/// <sample>
/// 123
/// 123=18+19+20+21+22+23
/// 123=40+41+42
/// 123=61+62
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	unsigned n;
	(void)scanf("%u", &n);
	//从最小的可能开始逐一尝试
	//Try one by one from the smallest possible
	//1+2+3....
	//2+3+4.....
	for (unsigned i = 1; i <= n / 2; i++)
	{
		unsigned sum = 0;
		for (unsigned j = i; sum <= n; j++)
		{
			sum = sum + j;
			//Adding from i to j is exactly equal to n
			if (sum == n) //从i到j相加恰好等于n
			{
				//按题目要求输出从i到j之间的数
				//Output the number from i to j as required by the title
				printf("%d=%d", n, i);
				for (unsigned k = i + 1; k <= j; k++)
				{
					printf("+%d", k);
				}
				printf("\n");
				break;
			}
		}
	}
	return 0;
}
