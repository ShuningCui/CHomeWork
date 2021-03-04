/// <ID>C081</ID>
/// <date>2020/11</date>
/// <summary>
/// 编写程序，按下列规则倒序输出子字符串。
/// 先输出最后的一个字符，再输出最后两个字符串，
/// 在再出后面三个字符..., 最后输出整个字符串。
/// </summary>
/// <input>一个字符串</input>
/// <output>空格隔开的子字符串，用一个空格间隔</output>
/// <sample>
/// student
/// t nt ent dent udent tudent student
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4267)

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100] = { 0 };
	(void)scanf("%s", str);
	int maxi = strlen(str) - 1;
	printf("%s", str + maxi);
	for (int i = 1; i <= maxi; i++)
	{
		printf(" %s", str + maxi - i);
	}
	return 0;
}
