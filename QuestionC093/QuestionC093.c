/*将字符串中奇数下标（从0开始）的字符顺序颠倒。
如字符12345678，结果为18365472
输入：字符串，不含空格。
输出：结果字符串。

Cui Shuning (崔舒宁）2020/11
*/

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
