/// <ID>C096</ID>
/// <date>2020/11</date>
/// <summary>
/// 输入一个长度不超过 100 的字符串，删除串中的重复字符。
/// 输入要检查的字符串，长度不超过100个字符。例如：abacaeedabcdcd。
/// 删除重复字符后的字符串。例如：abced。
/// </summary>
/// <input>一个字符串</input>
/// <output>删除重复字符后的字符串</output>
/// <sample>
/// abacaeedabcdcd
/// abced
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>03</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
char* DelChar(char* str, char ch);

int main()
{
	char str[100];
	(void)scanf("%s", str);
	int i = 0;
	while (str[i])
	{
		DelChar(str + i + 1, str[i]);
		i++;
	}
	printf("%s", str);
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
