/*输入一系列英文单词，单词之间用空格隔开（一到多个空格），用“###”表示输入结束，统计输入过哪些单词以及各单词出现的次数，统计时区分大小写字母。本题假定：不重复的单词数不超过100个；每个单词长度限制在20以内。
输入：
占一行
输出：
占一行，其格式为：单词1 - 个数 单词2 - 个数 …（单词与个数中间用减号连接，各输出组之间用一个空格分隔，单词依照出现的先后次序统计）

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

typedef struct wordCount
{
	char word[30];
	char count;
} WordCount;

int main()
{
	WordCount wordCount[100];
	char inStr[30];
	int n = 0;
	(void)scanf("%s", inStr);
	while (strcmp(inStr, "###"))
	{
		int flag = 0; //是否重复
		//查找是否已经统计过（重复）
		for (int i = 0; i < n; i++)
		{
			if (strcmp(inStr, wordCount[i].word) == 0)
			{
				wordCount[i].count++;
				flag = 1;
				break;
			}
		}
		if (flag == 0) //新单词
		{
			strcpy(wordCount[n].word, inStr);
			wordCount[n++].count = 1;
		}
		(void)scanf("%s", inStr);
	}

	//输出
	printf("%s-%d", wordCount[0].word, wordCount[0].count);
	for (int i = 1; i < n; i++)
	{
		printf(" %s-%d", wordCount[i].word, wordCount[i].count);
	}
	return 0;
}
