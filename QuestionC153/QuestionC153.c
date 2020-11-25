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
	int a[100];
	scanf("%d", &n);
	for (int i = 0; i < 2 * n; i++)
	{
		scanf("%d", &a[i]);
	}
	//奇数冒泡
	for (int i = 1; i < 2 * n - 1; i += 2)
	{
		for (int j = 2 * n - 1; j > i; j -= 2)
		{
			if (a[j] > a[j - 2])
			{
				int temp = a[j];
				a[j] = a[j - 2];
				a[j - 2] = temp;
			}
		}
	}

	//偶数冒泡

	for (int i = 0; i < 2 * n - 2; i += 2)
	{
		for (int j = 2 * n - 2; j > i; j -= 2)
		{
			if (a[j] < a[j - 2])
			{
				int temp = a[j];
				a[j] = a[j - 2];
				a[j - 2] = temp;
			}
		}
	}

	//输出
	printf("%d", a[0]);
	for (int i = 1; i < 2 * n; i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}
