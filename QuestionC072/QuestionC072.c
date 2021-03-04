/// <ID>C072</ID>
/// <date>2020/11</date>
/// <summary>
/// 输入字符串到字符数组s中，
/// 再输入一个字符给变量c，判断s中是否有c，
/// 若有则将该字符从s中删除后输出。若没有，则输出字符串“NotFound”。
/// </summary>
/// <input>2行，1个字符串(包含空格）和1个字符（包含空格）</input>
/// <output>删除后的字符串</output>
/// <sample>
/// she smiles
/// s
/// he mile
/// </sample>
/// <sample>
/// she smiles
/// x
/// NotFound
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>03</difficulty>
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
	       DelSomeChar(inputStr, delCh) == 0 ? "NotFound" : inputStr);
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
