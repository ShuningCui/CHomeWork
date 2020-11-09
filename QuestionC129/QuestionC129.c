/*输入一个可能带空格字符的字符串(长度不超过200)，
统计其中各个英文字母的出现次数，不区分大小写。
输出字母a～z的出现次数，数据间以英文逗号分隔。非英文字母不统计。
输入：可能带空格的字符串。
输出：26个整数，以英文逗号分隔。
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char inputStr[200] = { 0 };
	gets(inputStr);
	strupr(inputStr);
	int count[26] = { 0 };

	int i = 0;
	while (inputStr[i])
	{
		if (inputStr[i] >= 'A' && inputStr[i] <= 'Z')
		{
			count[inputStr[i] - 'A']++;
		}
		i++;
	}

	printf("%d", count[0]);
	for (i = 1; i < 26; i++)
	{
		printf(",%d", count[i]);
	}
	return 0;
}
