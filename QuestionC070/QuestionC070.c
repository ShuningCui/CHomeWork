/*编程，查找同时在第一个数组和第二个数组中的全部元素。
首先输入数组a的元素个数，再输入数组a的各个元素的值，接着输入数组b的元素个数，
再输入数组b的各个元素的值，输出同时在两个数组的全部元素。
样例输入：
3
1 2 3
5
1 3 5 7 9
样例输出：
1 3
*/


#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a[100], b[100];
	int an, bn;
	scanf("%d", &an);
	for (int i = 0; i < an; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &bn);
	for (int i = 0; i < bn; i++)
	{
		scanf("%d", &b[i]);
	}

	int ab[100];
	int abn = 0;
	for (int i = 0; i < an; i++)
	{
		for (int j = 0; j < bn; j++)
		{
			if (a[i] == b[j])
			{
				ab[abn++] = a[i];
			}
		}
	}

	for (int i = 0; i < abn; i++)
	{
		i == 0 ? printf("%d", ab[i]) : printf(" %d", ab[i]);
	}
	return 0;
}