/// <ID>C007</ID>
/// <date>2020/11</date>
/// <summary>
/// 找出m到n之间的所有同构数（m < n）
/// 一个正整数x，如果是它平方数的尾部，则称x为同构数
/// 例如，6是其平方数36的尾部，25是其平方数625的尾部，那么6和25都是同构数
/// </summary>
/// <input>m和n两个正整数，用空格分隔</input>
/// <output>连续输出同构数，数据间用空格分隔</output>
/// <sample>
/// 5 50
/// 5 6 25
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main()
{
	int m, n;
	(void)scanf("%d%d", &m, &n);
	int firstNum = 0;
	for (int i = m; i <= n; i++)
	{
		//Find the number of digits of i
		//求i的位数
		int digi = (int)log10(i) + 1;
		//Determine whether i is an isomorphic number
		//判断i是否是同构数
		if ((i * i) % (int)pow(10, digi) == i)
		{
			//Is the first number?
			//是否是输出的第一个数
			firstNum++ == 0 ? printf("%d", i) : printf(" %d", i);
		}
	}
}
/*
int IsomorphicNumber(int x, int xx);
int main()
{
	int m, n;
	
	(void)scanf("%d%d", &m, &n);
	int firstNum = 0;
	for (int i = m; i <= n; i++)
	{
		
		if (IsomorphicNumber(i, i * i))
		{
			if (firstNum == 0)
			{
				printf("%d", i);
				firstNum = 1;
			}
			else
			{
				printf(" %d", i);
			}
		}
		
	}
	return 0;
}

int IsomorphicNumber(int x, int xx)
{
	while (x && xx)
	{
		if (x % 10 != xx % 10)
		{
			return 0;
		}
		x = x / 10;
		xx = xx / 10;
	}
	return 1;
}

*/

