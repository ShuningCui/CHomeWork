//C013-将一个大于4的正整数分解为连续的正整数之和
//cuishuning 2020/11

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	unsigned n;
	(void)scanf("%u", &n);
	//从最小的可能开始逐一尝试
	//1+2+3....
	//2+3+4.....
	for (unsigned i = 1; i <= n / 2; i++)
	{
		int sum = 0;
		for (unsigned j = i; sum <= n; j++)
		{
			sum = sum + j;
			if (sum == n)  //从i到j相加恰好等于n
			{
				//按题目要求输出从i到j之间的数
				printf("%d=%d", n, i);
				for (int k = i + 1; k <= j; k++)
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