/*求一组数中的最大值，然后统计该最大值在这组数中出现的次数。
*输入：元素个数n和n个整数。n < 200。
*输出：最大值及出现的次数。数据间以一个逗号隔开。

* Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	(void)scanf("%d", &n);

	int i = 1;
	int nextNum;
	(void)scanf("%d", &nextNum);
	int max = nextNum;
	int maxNum = 1;

	while (i < n)
	{
		(void)scanf("%d", &nextNum);
		if (nextNum == max)
		{
			maxNum++;
		}
		if (nextNum > max)
		{
			max = nextNum;
			maxNum = 1;
		}
		i++;
	}
	printf("%d,%d", max, maxNum);
	return 0;
}
