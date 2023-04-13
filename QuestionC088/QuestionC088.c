/// <ID>C088</ID>
/// <date>2020/11</date>
/// <summary>
/// 将字符串首部的* 号全部移到字符串的尾部，
/// 中间若有* 号，保持中间的* 号不动。字符串长度不超过200.
/// </summary>
/// <input>字符串</input>
/// <output>移动后的结果</output>
/// <sample>
/// *** street***** music***
/// street***** music******
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4267)

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
	for (int m = 0; m < i - 1; m++) //将相同数量的*添加到尾部
	{
		starStr[m + len] = '*';
	}
	starStr[len + i - 1] = 0; //放置结尾标记

	/*
	* 也可以使用库函数完成
	* 
	char star[100];
	_strnset(star, '*', i-1);
	strncat(starStr, star, i - 1);
	*/

	printf("%s", starStr);
	return 0;
}
