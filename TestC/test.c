/*输入整数n和2n个整数，将序号为奇数的数从小到大排序，
将序号为偶数的数从大到小排序。n不超过12。
输入：整数n和2n个整数。
输出：按要求的排序结果，数间以空格隔开。
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[100];
	for (int i = 0; i < 2 * n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 2 * n - 1; i+=2)
	{
		for (int j = 2 * n - 2; j > i; j=j-2)
		{
			if (a[j] < a[j - 1])
			{
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	for (int i = 1; i < 2 * n; i+=2)
	{
		for (int j = 2 * n - 1; j > i; j = j - 2)
		{
			if (a[j] > a[j - 1])
			{
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	printf("%d", a[0]);
	for(int i = 1; i < 2 * n; i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}

