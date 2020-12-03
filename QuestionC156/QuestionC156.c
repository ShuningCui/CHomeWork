/*输入字符串（长度不超过200，不包含空格，至少有1个字符），
*除首尾字符外，将其余的字符按ascii码降序排列。
* 
* Cui Shuning (崔舒宁）2020/11
*/


#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4267)

#include<stdio.h>
#include<string.h>

void StrBubbleBetween(char* str, int begin, int end);

int main()
{
	char inStr[200] = { 0 };
	(void)scanf("%s", inStr);
	StrBubbleBetween(inStr, 1, strlen(inStr) - 2);
	printf("%s", inStr);
	return 0;
}

void StrBubbleBetween(char* str, int begin, int end)
{
	for (int i = begin; i < end; i++)
	{
		for (int j = end; j > i; j--)
		{
			if (str[j] > str[j - 1])
			{
				char temp = str[j];
				str[j] = str[j - 1];
				str[j - 1] = temp;
			}
		}
	}
}
