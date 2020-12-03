/*查找一个字符在字符串中的第一个位置并输出这个位置。
位置从0开始
输入输出格式：
输入：待查找的字符串和需要查找的字符，可能含有空格。
（输入时，待查找的字符串与所需查找的字符用* 号隔开）
“待查找字符串* 需要查找的字符”
输出：字符的位置
（如有多个相同的字符，只查找第一个，果没有输出 - 1。）

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

int Search(char* str, char ch);

#include<stdio.h>

int main()
{
	char inStr[100];
	gets_s(inStr, 100);

	int i = 0;
	while (inStr[i++] != '*');

	char ch = inStr[i];
	inStr[i - 1] = 0;
	printf("%d", Search(inStr, ch));
	return 0;
}

/// <summary>
/// 查找一个字符是否在一个串中
/// </summary>
/// <param name="str">查找的字符串</param>
/// <param name="ch">查找的字符</param>
/// <returns>如找到返回下标（从0开始，返回第一个找到的下标）没有，返回-1</returns>
int Search(char* str, char ch)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == ch)
		{
			return i;
		}
		i++;
	}
	return -1;
}
