/*如果一个数列中的某一段（至少有两个元素）的各元素值均相同，则称之为等值数列段。
等值数列段中元素的个数叫做等值数列段的长度。
输入：
序列长度N和N个整数（其中1 <= N <= 50), 以空格隔开。
输出：
数组中长度最大的等值数列段的始末下标（0～N - 1），用英文逗号分隔。如果没有等值数列段，则输出NO.
说明：
如果有多个同等长度的等值数列，只输出第一个等值数列的起止下标。
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

	int maxStart = 0;
	int maxEnd = 0;
	int maxLength = 0;
	int start = 0;
	int end = 0;
	int length = 0;

	int i = 0;
	while (i < n)
	{
		start = i;
		end = i + 1;
		while (a[start] == a[end] && end < n)
		{
			end++;
		}

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