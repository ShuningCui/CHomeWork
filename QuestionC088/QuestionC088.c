/*将字符串首部的* 号全部移到字符串的尾部，
中间若有* 号，保持中间的* 号不动。字符串长度不超过200.
样例
*** street***** music***
street***** music******

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char starStr[200];
	(void)scanf("%s", starStr);
	
	int i = 0;
	while (starStr[i++] == '*'); //计算前面一共有多少个*
	strcpy(starStr, starStr + i - 1); //除去开始的*
	
	int len = strlen(starStr);
	for (int m = 0; m < i - 1; m++)  //将相同数量的*添加到尾部
	{
		starStr[m + len] = '*';
	}
	starStr[len + i - 1] = 0;  //放置结尾标记

	printf("%s", starStr);
	return 0;
}