/*输入一个正整数，求出它的质因子的和。
例如，12的质因子和为2 + 2 + 3 = 7。如果输入的是质数，直接显示0.
输入：正整数
输出：质因子的求和表达式。加号和等号是英文符号。
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	(void)scanf("%d", &n);
	int sum = 0;
	int isFirst = 0;
	int i = 2;
	while (n > 0 && i <= n)
	{
		if (n % i == 0)
		{
			if (isFirst == 0)
			{
				if (i == n)
				{
					printf("0");
					return 0;
				}
				printf("%d", i);
				isFirst++;
			}
			else
			{
				printf("+%d", i);
			}
			sum += i;
			n = n / i;
			continue;
		}
		i++;
	}
	printf("=%d\n", sum);
	return 0;
}