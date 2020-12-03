/*求正整数n的所有因子(1和n除外)的和。
*例如：n = 20时，因子为2、4、5、10 ，它们的和为21。素数的因子和为0。
*输入：正整数n。
*输出：除1和本身之外的因子的和，整数。

* Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	(void)scanf("%d", &n);
	int sum = 0;
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}
