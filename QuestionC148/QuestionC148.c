/*定义字符串数组str，其数组长度为81，键盘读入一个字符串（少于81个字符）。将该字符串中出现的所有小写字母按字母序升序输出（字母序为：abcdefg…xyz）。
输入输出格式要求：
输入输出各占一行，第一行是输入，第二行是输出。

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4267)

#include<stdio.h>
#include<string.h>

void StrBubble(char* a);

int main()
{
	char low[100];
	char inStr[200];
	(void)scanf("%s", inStr);
	int i = 0;
	int j = 0;
	while (inStr[i])
	{
		if (inStr[i] >= 'a' && inStr[i] <= 'z')
		{
			low[j] = inStr[i];
			j++;
		}
		i++;
	}
	low[j] = 0;
	StrBubble(low);
	printf("%s", low);
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
