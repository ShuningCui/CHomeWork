/*编写函数, 函数原型如下:
void fun(int n, char res[]);
该函数的功能是将整数n的各位数字逆序排列，存放到res字符数组中。例如整数1035，逆序后为5301。
输入输出格式：
输入：一个整数(整数数位不超过15位)。
输出：逆序后的值。

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void fun(int n, char res[]);

int main()
{
	int n;
	(void)scanf("%d", &n);
	char res[20];
	fun(n, res);
	printf("%s", res);
	return 0;
}

void fun(int n, char res[])
{
	int i = 0;
	while (n)
	{
		res[i++] = n % 10 + '0';
		n /= 10;
	}
	res[i] = 0;
}
