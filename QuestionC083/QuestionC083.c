/*输入两个字符串，交叉输出（第1个字符串的字符先输出），
长度不同时，最后只输出长的字符串中的字符。
例如team和good, 输出为tgeoaomd ；
若两个字符串是challenge和put, 
则输出为cphuatllenge。字符的长度不超过100。
输入字符串间以空格分隔。
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char input01[120];
	char input02[120];
	(void)scanf("%s%s", input01, input02);
	int i = 0;
	int j = 0;
	while (input01[i] || input02[j])
	{
		if (input01[i])
		{
			printf("%c", input01[i++]);
		}
		if (input02[j])
		{
			printf("%c", input02[j++]);
		}
	}
	return 0;
}
