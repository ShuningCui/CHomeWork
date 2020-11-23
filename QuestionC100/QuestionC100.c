/*编写程序，输入字符串到字符数组s中，
将字符串中的空格均改为逗号（每1个空格对应1个英文逗号）。 
输入一行：字符串。 
输出一行：改变后的字符串； 
若没有空格，则输出字符串“NotFound”。
*/


#include<stdio.h>
int ReplaceChar(char* str, char ch, char repCh);
int main()
{
	char str[200];
	scanf("%[^\n]", str);
	printf("%s", ReplaceChar(str, ' ', ',') ==0 ? "NotFound" : str);
	return 0;
}

/// <summary>
/// 将字符串中的某一个字符替换为另一个字符
/// </summary>
/// <param name="str">替换的字符串</param>
/// <param name="ch">被替换的字符</param>
/// <param name="repCh">替换后的字符</param>
/// <returns>替换的字符个数</returns>
int ReplaceChar(char* str, char ch, char repCh)
{
	int i = 0;
	int sum = 0;
	while (str[i])
	{
		if (str[i] == ch)
		{
			str[i] = repCh;
			sum++;
		}
		i++;
	}
	return sum;
}
