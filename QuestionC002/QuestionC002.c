/*编写程序，将用户输入的最多5位八进制数转换为十进制。
输入：一个整数。
输出：一个整数。

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	(void)scanf("%o", &n);
	printf("%d", n);
	return 0;
}
