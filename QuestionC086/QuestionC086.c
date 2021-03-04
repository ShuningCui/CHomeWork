/// <ID>C086</ID>
/// <date>2020/11</date>
/// <summary>
/// 编写程序，去掉字符串末尾多余的星号。
/// 输入带星号（* ）的字符串和n，使字符串尾部的* 号不得多于n个；
/// 若多于n个，则删除多余的* 号；若少于或等于n个，
/// 则什么也不做，字符串中间和前面的* 号不删除。
/// 字符串的长度不超过200。字符串中的星号是英文星号。
/// </summary>
/// <input>一个字符串和一个非负整数，中间用空格隔开</input>
/// <output>去掉多余* 号的字符串</output>
/// <sample>
/// ***street**music**** 2
/// ***street**music**
/// </sample>
/// <sample>
/// ***street**music**** 6
/// ***street**music****
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4267)

#include<stdio.h>
#include<string.h>

int main()
{
	char str[200] = {0};
	(void)scanf("%s", str);
	int len = strlen(str);

	//定位到最后一个字符
	int m = len - 1;
	//计算结尾的*
	while (str[m--] == '*');

	int n;
	(void)scanf("%d", &n);
	if (len - m - 2 > n)
	{
		str[m + 2 + n] = 0;
	}

	printf("%s", str);
	return 0;
}
