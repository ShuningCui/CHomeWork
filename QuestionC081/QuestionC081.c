/*编写程序，按下列规则倒序输出子字符串。
先输出最后的一个字符，再输出最后两个字符串，
在再出后面三个字符..., 最后输出整个字符串。
输入的字符串长度不超过100。
输入：一个字符串
输出：空格隔开的子字符串，用一个空格间隔。
输入输出样例：
student
t nt ent dent udent tudent student

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	(void)scanf("%s", str);
	int maxi = strlen(str) - 1;
	printf("%s", str + maxi);
	for (int i = 1; i <= maxi; i++)
	{
		printf(" %s", str + maxi - i);
	}
	return 0;
}
