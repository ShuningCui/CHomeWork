/*编程函数，将字符串（长度小于20个字符）
用替换加密法译成密码。
替换加密的加密规则是：
将原来的字母用字母表中其后面的第3个字母来替换，
对于字母表中最后的三个字母，可将字母表看成是首尾衔接的。
如字母c就用f来替换，字母y用b来替换。
例如输入字符串为“Study”，则加密后的字符串为“Vwxgb”。
样例：
Study
Vwxgb

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
char ShiftChar(char x, int n);

int main()
{
	char str[200];
	(void)scanf("%s", str);
	int i = 0;
	while (str[i])
	{
		str[i++] = ShiftChar(str[i], 3);
	}
	printf("%s", str);
	return 0;
}

///<summary>
/// 对字母x，用字母表中其后的第n个字母代替，
/// 不够n个时再从字母a循环计数
/// </summary>
/// <param name="x">替换的字母</param>
/// <param name="n">替换值</param>
/// <returns>替换后的字母,如果x不是字母，则返回x</returns>
char ShiftChar(char x, int n)
{
	if ('A' <= x && x <= 'Z')
	{
		x = (x - 'A' + n) % 26 + 'A';
	}
	if ('a' <= x && x <= 'z')
	{
		x = (x - 'a' + n) % 26 + 'a';
	}
	return x;
}
