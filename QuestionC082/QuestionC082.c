/*一个字符串，如果第1个字符和最后一个字符相同，
第2个字符和倒数第2个相同，...，则称为回文字符串，
简称回文串。如deed。
输入一个字符串，判断是否回文字符串。若是则显示YES，否则显示NO。输入的字符串长度不超过200.
样例1：
deed
YES
例2：
good
NO
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char str[220];
	(void)scanf("%s", str);
	char revStr[220];
	strcpy(revStr, str);
	printf("%s", strcmp(str, _strrev(revStr)) == 0 ? "YES" : "NO");
	return 0;
}
