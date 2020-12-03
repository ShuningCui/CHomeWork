/*输入一个正整数，求出它的质因子的和。
*例如，12的质因子和为2 + 2 + 3 = 7。如果输入的是质数，直接显示0.
*输入：正整数
*输出：质因子的求和表达式。加号和等号是英文符号。

* Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	(void)scanf("%d", &n);
	int sum = 0;
	//是否是第一个质因子
	//Is it the first prime factor
	int isFirst = 0;

	int i = 2;
	while (n > 0 && i <= n)
	{
		//只要能被整数，i一定是质因子
		//As long as it can be an integer, i must be a prime factor
		if (n % i == 0)
		{
			if (isFirst == 0)
			{
				//输入的数是一个质数
				//input number is a prime
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
			//跳过i++继续测试当前的i是否还是质因子，注意重复的质因子
			//Skip i++ to continue testing whether the current 
			//i is still a prime factor, 
			//pay attention to repeated prime factors
			continue;
		}
		i++;
	}
	printf("=%d\n", sum);
	return 0;
}
