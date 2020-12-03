/*求n个数的最小公倍数，2 <= n < 10。
*输入：n个正整数，以0作为数的结束。用空格隔开。
*输出：最小公倍数和这n个数，用一个空格隔开。
*样例：
*210 54 24 0
*7560 210 54 24
*注：输入中，输入的数的个数是不确定的，不超过10，不小于2，最后的0是结束标志。
*输出中，第1个数是它们的最小公倍数，后面是输入的n个数，中间用一个空格隔开。

* Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int inputNum[50];
	int i = 0;
	do
	{
		(void)scanf("%d", &inputNum[i]);
	}
	while (inputNum[i++]);
	int lcm = inputNum[0];
	//flag等于1没有找到最小公倍数，否则flag=0
	//Flag is equal to 1 and the least 
	//common multiple is not found, otherwise flag=0
	int flag = 1;
	while (flag)
	{
		flag = 0;
		for (int n = 1; n < i - 1; n++)
		{
			if (lcm % inputNum[n])
			{
				flag = 1;
				break;
			}
		}
		if (flag)
		{
			lcm = lcm + inputNum[0];
		}
	}
	printf("%d", lcm);
	for (int n = 0; n < i - 1; n++)
	{
		printf(" %d", inputNum[n]);
	}

	return 0;
}
