/// <ID>C093</ID>
/// <date>2020/11</date>
/// <summary>
/// 将字符串中奇数下标（从0开始）的字符顺序颠倒。
/// 如字符12345678，结果为18365472
/// </summary>
/// <input>字符串，不含空格</input>
/// <output>结果字符串</output>
/// <sample>
/// 12345678
/// 18365472
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>03</difficulty>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4267)

#include<stdio.h>
#include<string.h>

int main()
{
	char inputStr[200] = { 0 };
	(void)scanf("%s", inputStr);

	int i = 1;
	int j = strlen(inputStr) - 1;

	if (j % 2 == 0)
	{
		j--;
	}

	while (j > i)
	{
		char temp = inputStr[i];
		inputStr[i] = inputStr[j];
		inputStr[j] = temp;
		i += 2;
		j -= 2;
	}
	printf("%s", inputStr);
	return 0;
}
