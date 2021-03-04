/// <ID>C030</ID>
/// <date>2020/11</date>
/// <summary>
/// 单词加密。输入一个字符串和一个非负整数k，
/// 对字符串中的每一个字母，用字母表中其后的第k个字母代替，
/// 不够k个时再从字母a循环计数。例如k = 3是，a用d代替，
/// A用D代替，x用a代替，y用b代替，保持大小写不变。
/// 字符串中的非字母字符不变。字符串的长度不超过100。
/// </summary>
/// <input>一个字符串和非负整数k</input>
/// <output>加密的字符串</output>
/// <sample>
/// werery 123
/// pxkxkr
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS

char ShiftChar(char x, int n);

#include<stdio.h>

int main()
{
	char str[100];
	int n;
	(void)scanf("%s%d", str, &n);
	int i = 0;
	while (str[i])
	{
		str[i++] = ShiftChar(str[i], n);
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
