/*输入只含小写字母的字符串，要求按字典序以从小到大的顺序输出，且输出的每个字符之间空1格。(字符串长度不超过20）
	样例：
	abazc
	a a b c z
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

void StrBubble(char* a);
char* DelChar(char* str, char ch);

int main()
{
	char inStr[100];
	gets_s(inStr,100);
	DelChar(inStr, ' ');
	
	StrBubble(inStr);
		
	printf("%c", inStr[0]);
	for (int i = 1; i < strlen(inStr); i++)
	{
		printf(" %c", inStr[i]);
	}
	return 0;
}

void StrBubble(char* a)
{
	int len = strlen(a);
	for (int i = 0; i < len; i++)
	{
		for (int j = len - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				char temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
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