/// <ID>C111</ID>
/// <date>2020/11</date>
/// <summary>
/// 输入一个带有空格的字符串（包含字母、数字、空格以及其他符号），
/// 提取字符串中的数字转换为整数并输出，
/// 字符串中的非数字字符视为分割符。
/// 输出数据间以空格分隔，末尾没有空格，并换行输出所有整数的和值。若
/// 字符串中没有任何数字时，输出“NO”。输入的字符串长度不超过80。 
/// </summary>
/// <input>1行字符串</input>
/// <output>2行，第一行是转化的整数，第2行是所有整数的和</output>
/// <sample>
/// 2
/// 1/2 1/2
/// 1
/// </sample>
/// /// <sample>
/// 3
/// -1/2 -1/2 -1/2
/// -1 1/2
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>03</difficulty>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4267)

#include<stdio.h>
#include<string.h>

int SplitString(char str[], char ch, char r[][100]);
int Convert(char str[]);

int main()
{
	char inStr[1000];
	gets_s(inStr, 1000);
	int i = 0;
	while (inStr[i])
	{
		if (!(inStr[i] >= '0' && inStr[i] <= '9'))
		{
			inStr[i] = '*';
		}
		i++;
	}
	char splitStr[100][100];
	int m = SplitString(inStr, '*', splitStr);
	if (m == 0)
	{
		printf("NO");
		return 0;
	}
	int num[100] = { 0 };
	int sum = 0;
	for (i = 0; i < m; i++)
	{
		num[i] = Convert(splitStr[i]);
		sum += num[i];
	}
	printf("%d", num[0]);
	for (i = 1; i < m; i++)
	{
		printf(" %d", num[i]);
	}
	printf("\n%d", sum);
	return 0;
}

int SplitString(char str[], char ch, char r[][100])
{
	int i = 0;
	int m = 0;
	int n = 0;
	while (str[i] == ch && str[i] != 0)
	{
		i++;
	}
	while (str[i] != 0)
	{
		while (str[i] != ch && str[i] != 0)
		{
			r[m][n] = str[i];
			n++;
			i++;
		}
		r[m][n] = 0;
		m++;
		n = 0;
		while (str[i] == ch && str[i] != 0)
		{
			i++;
		}
	}
	return m;
}

int Convert(char str[])
{
	int n = 0;
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		n = n * 10 + (str[i] - '0');
	}
	return n;
}
