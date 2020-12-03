/*编写函数，去掉一个字符串中除头部和尾部空格外的所有空格，并编写主函数进行调用测试。
输入：
占一行（注：输入的字符串长度不会超过80）
输出：
占一行

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4267)

#include<stdio.h>
#include<string.h>

char* DelCharBtweenStr(char* str, int i, int j, char delch);

int main()
{
	char inputStr[100];
	gets_s(inputStr,100);
	//找字符串左边第一个非空格字符
	int i = 0;
	while (inputStr[i] && inputStr[i] == ' ')
	{
		i++;
	}

	//找字符串右边第一个非空格字符
	int j = strlen(inputStr) - 1;
	while (inputStr[j] && inputStr[j] == ' ')
	{
		j--;
	}
	printf("%s", DelCharBtweenStr(inputStr, i, j, ' '));
	return 0;
}

char* DelCharBtweenStr(char* str, int i, int j, char delch)
{
	//删除i到j之间所有字符；
	while (j >= i)
	{
		if (str[j] == delch)
		{
			int n = j;
			while (str[n])
			{
				str[n] = str[n + 1];
				n++;
			}
			str[n] = 0;
		}
		j--;
	}
	return str;
}
