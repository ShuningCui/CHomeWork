/// <ID>C085</ID>
/// <date>2020/11</date>
/// <summary>
/// 输入字符串，字符串中有若干星号*, 去掉字符串首尾的星号（* ），
/// 保留中间的星号。 字符串长度不大于200
/// </summary>
/// <input>带有* 号的字符串</input>
/// <output>首尾不带* 号的字符串</output>
/// <sample>
/// ***street**music****
/// street**music
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>03</difficulty>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4267)

#include<stdio.h>
#include<string.h>

char* RemoveCharAtBegin(char* str, char ch);
char* RemoveCharAtEnd(char* str, char ch);

int main()
{
	char str[200];
	(void)scanf("%s", str);
	(void)RemoveCharAtBegin(str, '*');
	printf("%s", RemoveCharAtEnd(str, '*'));
	return 0;
}

/// <summary>
/// 将字符串开头处指定的字符删除
/// for example, "sss123ss" after removed 's' is "123ss"
/// </summary>
/// <param name="str">the original character string</param>
/// <param name="ch">the character will be removed</param>
/// <returns>the pointer of string after removed</returns>
char* RemoveCharAtBegin(char* str, char ch)
{
	int i = 0;
	//find the first character that do not equal ch
	while (str[i] == ch && str[i] != 0)
	{
		i++;
	}
	int j = 0;
	//remove the character
	while ((str[j++] = str[i++]) != 0);
	/*while(str[i]!=0)
	{
	    str[j++] = str[i++];
	}*/
	return str;
}

/// <summary>
/// 将字符串结尾处指定的字符删除
/// for example, "sss123ss" after removed 's' is "sss123"
/// </summary>
/// <param name="str">the original character string</param>
/// <param name="ch">the character will be removed</param>
/// <returns>the pointer of string after removed</returns>
char* RemoveCharAtEnd(char* str, char ch)
{
	int i = strlen(str);
	i--;
	//find the last character equal ch form the end of string
	while (str[i] == ch && i >= 0)
	{
		i--;
	}
	//put the zero end of string
	str[++i] = 0;
	return str;
}
