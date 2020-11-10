/*比较两个字符串的前n个字符，不区分大小写。字符串的长度不超过100。
如果第1个字符串的前n个字符大于第2个字符串的前n个字符，输出1；
如果第1个字符串的前n个字符小于第2个字符串的前n个字符，输出 - 1；
如果第1个字符串的前n个字符等于第2个字符串的前n个字符，输出0；
字符比较：字母表中后面的大于前面的。
输入：两个字符串和一个正整数。
输出：1、 - 1或0。

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100], str2[100];
	int n;
	(void)scanf("%s%s%d", str1, str2, &n);
	//将字符串截断为n
	str1[n] = str2[n] = 0;

	//转换为大写
	_strupr(str1);
	_strupr(str2);

	//比较
	int r = strcmp(str1, str2);
	printf("%d", (r == 0 ? 0 : (r > 0 ? 1 : -1)));
	return 0;
}