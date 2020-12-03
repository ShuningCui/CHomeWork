/*如果一个数列中的某一段（至少有两个元素）的各元素值均相同，则称之为等值数列段。
等值数列段中元素的个数叫做等值数列段的长度。
输入：
序列长度N和N个整数（其中1 <= N <= 50), 以空格隔开。
输出：
数组中长度最大的等值数列段的始末下标（0～N - 1），用英文逗号分隔。如果没有等值数列段，则输出NO.
说明：
如果有多个同等长度的等值数列，只输出第一个等值数列的起止下标。

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a[100];
	int n;
	(void)scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		(void)scanf("%d", &a[i]);
	}

	int maxStart = 0; //当前最大起始下标
	int maxEnd = 0; //当前最大结束下标
	int maxLength = 0; //当前最大长度
	int start = 0; //当前起始下标
	int end = 0; //当前起始下标
	int length = 0; //当前长度

	int i = 0;
	while (i < n)
	{
		//当前等值数列段的起始下标和结束下标
		start = i;
		end = i + 1;
		while (a[start] == a[end] && end < n)
		{
			end++;
		}
		//若当前等值数列段的长度大与当前最大等值数列段的长度
		//则替换原有最大为当前
		if (end - start > 1)
		{
			length = end - start;
			if (length > maxLength)
			{
				maxStart = start;
				maxEnd = end - 1;
				maxLength = length;
			}
		}
		i = end;
	}

	maxLength == 0 ? printf("NO") : printf("%d,%d", maxStart, maxEnd);
	return 0;
}
