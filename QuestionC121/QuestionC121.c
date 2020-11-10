/*编写函数，将一个字符串str中指定的字符ch删去（包括重复出现的字符），
并编写主函数进行调用测试。函数原型:  void delchar(char* str, char ch); 。
输入：
占二行。
第1行，输入任意字符串（注：输入的字符串长度不会超过80）
第2行，输入一个字符
输出：
占一行

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

char* DelChar(char* str, char ch);
int main()
{
	char str[200];
	char ch;

	//读入一个字符串，以回车结尾；抛弃回车；再读入一个字符
	(void)scanf("%[^\n]%*c%c", str, &ch);
	printf("%s", DelChar(str, ch));
	return 0;
}

/// <summary>
/// 将字符串中指定的字符删除
/// </summary>
/// <param name="str">待处理的字符串</param>
/// <param name="ch">需要删除的字符</param>
/// <returns>删除后的字符串</returns>
char* DelChar(char* str, char ch)
{
	
	int i = 0;
	while (str[i])
	{
		if (str[i] == ch)
		{
			int j = 0;
			while (str[i+j+1])
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
	return str;
}
