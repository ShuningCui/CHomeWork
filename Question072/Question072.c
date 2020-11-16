/*编写程序，输入字符串到字符数组s中，
再输入一个字符给变量c，判断s中是否有c，
若有则将该字符从s中删除后输出。若没有，则输出字符串“NotFound”。
输入2行，1个字符串和1个字符：
输出：删除后的字符串
样例1：
输入：
smiles
s
输出：
mile
样例2：
输入：
smiles
a
输出：
NotFound
*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int DelSomeChar(char* str, char ch);

int main()
{
	char inputStr[100];
	char delCh;
	(void)scanf("%[^\n]%*c%c", inputStr, &delCh);
	//上述scanf语句等价于：
	//gets(inputStr);
    //getchar();
	//delCh=getchar();

	printf("%s",
		DelSomeChar(inputStr,delCh) == 0 ? "NotFound" : inputStr);
	return 0;
}

/// <summary>
/// 删除字符串中指定的字符
/// </summary>
/// <param name="str">输入的字符串</param>
/// <param name="ch">删除的字符</param>
/// <returns>删除的字符个数</returns>

int DelSomeChar(char* str, char ch)
{

	int i = 0;
	int sum = 0;
	while (str[i])
	{
		if (str[i] == ch)
		{
			sum++;
			int j = 0;
			while (str[i + j + 1])
			{
				str[i + j] = str[i + j + 1];
				j++;
			}
			str[i + j] = 0;
		}
		else
		{
			i++;
		}
	}
	return sum;
}

