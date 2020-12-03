/*输入字母、数字和空格组成的字符串，
提取字符串中的整数并输出，字符串中的非数字字符视为分割符。
输出数据间以英文逗号分隔，末尾没有逗号。
并换行输出其和值。若字符串中没有数据时，输出“NO”。输入的字符串长度不超过80。
输入格式：占一行，输入字符串。
输出格式：占两行。
第一行：各数据间用一个英文逗号分隔，第二行：它们的和值。
*/

#define _CRT_SECURE_NO_WARNINGS

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
	int num[100];
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		num[i] = Convert(splitStr[i]);
		sum += num[i];
	}
	printf("%d", num[0]);
	for (int i = 1; i < m; i++)
	{
		printf(",%d", num[i]);
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
