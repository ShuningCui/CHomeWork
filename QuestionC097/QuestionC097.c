/*输入有字母和数字组成的字符串s和t（串长不超过100个字符），
将在字符串s中出现，但未在字符串t中出现的字符(区分大小写)
组成一个新的字符串放在u中，u中字符按原字符串中字符顺序排列，
不去掉重复字符，输出u。若s中的字符在t中都出现过，输出#。
例如：当s = "112345"，t = "2467"时，u = "1135"。若s = "12", t = "12", 输出"#"
输入：两个字符串，中间用空格隔开。scanf("%s%s", s, t);
输出：结果串

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int Search(char* str, char ch);

int main()
{
	char s[100], t[100], u[100] = {0};
	(void)scanf("%s%s", s, t);
	int si = 0, ui = 0;
	while (s[si])
	{
		if (Search(t, s[si]) == -1)
		{
			u[ui++] = s[si];
		}
		si++;
	}

	printf("%s", u[0] == 0 ? "#" : u);
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
