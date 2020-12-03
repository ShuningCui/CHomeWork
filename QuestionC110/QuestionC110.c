/*输入一个英文字符串（长度 < 81）可能包含空格，
删除其中所有非小写字母字符，
并输出删除后的字符串（小写字母的相对位置保持不变）。
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

char* DelChar(char* str, char ch);

int main()
{
	char input[100];
	gets_s(input,100);
	int i = 0;
	while (input[i])
	{
		if (!(input[i] >= 'a' && input[i] <= 'z'))
		{
			DelChar(input, input[i]);
			continue;
		}
		i++;
	}
	printf("%s", input);
	return 0;
}

/// <summary>
/// 删除字符串中指定的字符
/// </summary>
/// <param name="str">输入的字符串</param>
/// <param name="ch">删除的字符</param>
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
