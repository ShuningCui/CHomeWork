/*去掉字符串中的空格。字符串长度不超过200.
输入：带空格的字符串。
输出：不含空格的字符串。
样例：
Washington hosts Chinese folklife festival
WashingtonhostsChinesefolklifefestival
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char blankString[200];
	char noBlankString[200];
	gets(blankString);
	
	int i = 0, j = 0;
	while (blankString[i])
	{
		blankString[i] == ' ' ? i++ : (noBlankString[j++] = blankString[i++]);
	}
	noBlankString[j] = 0;
	
	printf("%s\n", noBlankString);

	return 0;
}