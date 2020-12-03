/*编写一个程序，从键盘中读入一个数字串，把它转为数字的小写英语单词输出，如读入234，输出“two three four”。
输入：一串数字
输出：用空格隔开的英文基数词，小写。
样例：
234
two three four

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	const char word[][30] = {
		"zero", "one", "two", "three",
		"four", "five", "six", "seven", "eight", "nine"
	};
	char inStr[100];
	(void)scanf("%s", inStr);
	printf("%s", word[inStr[0] - '0']);
	for (int i = 1; i < strlen(inStr); i++)
	{
		printf(" %s", word[inStr[i] - '0']);
	}
	return 0;
}
