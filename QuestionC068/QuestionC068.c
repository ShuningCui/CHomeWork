/*去掉字符串中的空格。字符串长度不超过200.
输入：带空格的字符串。
输出：不含空格的字符串。
样例：
Washington hosts Chinese folklife festival
WashingtonhostsChinesefolklifefestival

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

char* DelChar(char* str, char ch);

int main()
{
	char blankString[200];
	fgets(blankString,200,stdin);

	printf("%s\n", DelChar(blankString,' '));
	return 0;
}

/// <summary>
/// 将字符串中指定的字符删除
/// </summary>
/// <param name="str">待处理的字符串</param>
/// <param name="ch">需要删除的字符</param>
/// <returns>删除后的字符串</returns>
char* DelChar(char* str, char ch)
{

	int i = 0;
	while (str[i])
	{
		if (str[i] == ch)
		{
			int j = 0;
			while (str[i + j + 1])
			{
				str[i + j] = str[i + j + 1];
				j++;
			}
			str[i + j] = 0;
		}
		else
		{
			i++;
		}
	}
	return str;
}