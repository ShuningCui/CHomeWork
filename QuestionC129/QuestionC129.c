/// <ID>C129</ID>
/// <date>2020/11</date>
/// <summary>
/// 输入一个可能带空格字符的字符串(长度不超过200)，
/// 统计其中各个英文字母的出现次数，不区分大小写。
/// 输出字母a～z的出现次数，数据间以英文逗号分隔。非英文字母不统计。
/// </summary>
/// <input>可能带空格的字符串</input>
/// <output>26个整数，以英文逗号分隔</output>
/// <sample>
/// EOWfmmdlfo  eor - 035k WOPIEJRmflld 34
/// 0, 0, 0, 2, 3, 3, 0, 0, 1, 1, 1, 3, 3, 0, 4, 1, 0, 2, 0, 0, 0, 0, 2, 0, 0, 0
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char inputStr[200] = {0};
	gets_s(inputStr, 200);
	_strupr(inputStr); //转换为大写
	int count[26] = {0};

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
