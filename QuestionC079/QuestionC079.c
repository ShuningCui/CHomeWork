/*编写字符串反转函数，该函数将指定字符串中的字符左右顺序颠倒排列。该函数的原型为：
char* mystrrev(char string[]);
其中参数string是待反转的字符串，该函数的返回值为左右顺序颠倒后的字符串指针。
编写主函数，对上述函数进行测试。
样例：
abcdefghijklmn
nmlkjihgfedcba
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

char* mystrrev(char* str);

int main()
{
	char str[200];
	(void)scanf("%[^\n]", str);
	printf("%s", mystrrev(str));
	return 0;
}

/// <summary>
/// 反转字符串，strrev在c99标准中不是标准库函数，一些编译器并没提供
///如果编译器提供了该函数，尽量使用编译器提供的版本
/// </summary>
/// <param name="str">待反转的字符串</param>
/// <returns>反转后的字符串</returns>
char* mystrrev(char* str)
{
	int j = strlen(str); //the length of string
	for (int i = 0; i < j / 2; i++) //swap head and tail
	{
		char t = str[i];
		str[i] = str[j - i - 1];
		str[j - i - 1] = t;
	}
	return str;
}
