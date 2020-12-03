/*任何一个自然数m的立方均可写成m个连续奇数之和。例如：
*1 ^ 3 = 1
*2 ^ 3 = 3 + 5
*3 ^ 3 = 7 + 9 + 11
*4 ^ 3 = 13 + 15 + 17 + 19
*编程实现：输入一自然数n，求组成n ^ 3的n个连续奇数。
*输入：一个正整数n。输出：组成n ^ 3的连续奇数，用一个空格分隔
*
* Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num;
	(void)scanf("%d", &num);
	//计算出第一个奇数
	//Calculate the first odd number
	int a = num * (num - 1) + 1;
	printf("%d", a);
	for (int i = 1; i < num; i++)
	{
		printf(" %d", a += 2);
	}
	return 0;
}
