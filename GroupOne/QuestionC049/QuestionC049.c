/*输入一个大写英文字母， 输出与其相邻的字母串（将字母A - Z看作是收尾相接的环状排列）。
输入 : 大写英文字母
输出 : 该字母前面的字母，该字母，该字母后面的字母。（三字母间无间隔）
*/


#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char uppercaseLetter;
	(void)scanf("%c", &uppercaseLetter);
	printf("%c%c%c", uppercaseLetter - 1 < 'A' ? 'Z' : uppercaseLetter - 1, uppercaseLetter,
		uppercaseLetter + 1 > 'Z' ? 'A' : uppercaseLetter + 1);
	return 0;
}