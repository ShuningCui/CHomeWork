/*很久以前，购物还经常找回硬币。
把n张1元纸币换成一分、二分和五分面值的硬币，
假设每种至少一枚，问有多少种换法？
n值由用户从键盘输入，换法的数量。
输入：整数n
输出：一个整数
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	n = n * 100;
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n / 2; j++)
		{
			for (int k = 1; k < n / 5; k++)
			{
				if (n == i + j * 2 + k * 5)
				{
					sum++;
				}
			}
		}
	}
	printf("%d", sum);
	return 0;
}