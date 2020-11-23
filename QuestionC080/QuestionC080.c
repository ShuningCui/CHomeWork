/*设5个单词的单词表，""reserve"", ""replace"", ""core"", ""nature, "" ""literature""，
编写程序在单词表中查找单词，若找到，则显示YES，若找不到则显示NO。查找不区分大小写。
输入：一个表示单词的字符串。
输出：YES或NO。
样例1：
RESERVE
YES
样例2：
change
NO
*/


#include<stdio.h>
#include<string.h>

int strSearch(char words[][30], int n, char word[]);
int main()
{
	char words[5][30] = { "reserve", "replace", "core", "nature", "literature" };
	char word[30];
	scanf("%s", word);
	printf("%s", strSearch(words, 5, _strlwr(word)) == -1 ? "NO" : "YES");
	return 0;
}

int strSearch(char words[][30], int n, char word[])
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(words[i], word) == 0)
		{
			return i;
		}
	}
	return -1;
}

