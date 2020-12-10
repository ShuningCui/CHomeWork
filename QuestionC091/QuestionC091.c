/*一维数组中按顺序存放着1, 2, 3, ..., 15共15个整数，
 *输入n, m, 1 <= n <= m <= 15为整数，
 *将第n到第m个元素移到数组的末尾。
 *输入：正整数n, m，中间用空格隔开。
 *输出：顺序改变的数组元素，用英文逗号隔开，末尾没有逗号。
 *
 *Cui Shuning (崔舒宁）2020/11
 */

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int n;
	int m;
	(void)scanf("%d%d", &n, &m);

	for (int i = 0; i < 15 - m; i++)
	{
		a[i + n - 1] = m + i + 1;
	}
	for (int i = n + 14 - m; i < 15; i++)
	{
		a[i] = m + i - 14;
	}
	printf("%d", a[0]);
	for (int i = 1; i < 15; i++)
	{
		printf(",%d", a[i]);
	}
	return 0;
}
