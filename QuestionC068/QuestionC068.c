/*
Washington hosts Chinese folklife festival
WashingtonhostsChinesefolklifefestival
Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

char* DelChar(char* str, char ch);

int main()
{
	char blankString[200];
	fgets(blankString, 200,stdin);

	printf("%s\n", DelChar(blankString, ' '));
	return 0;
}

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
