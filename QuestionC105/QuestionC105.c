/*定义包含5个英文单词的字符数组（即二维字符数组），
键盘输入5个单词，按字典顺序寻找最大和最小单词并输出。
输入：5个单词
输出：最大和最小单词（按字典序）
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

void BubbleWord(char word[][100], int n);

int main()
{
	char word[5][100];
	for (int i = 0; i < 5; i++)
	{
		scanf("%s", word[i]);
	}
	BubbleWord(word, 5);
	printf("max:%s min:%s\n", word[4], word[0]);
	return 0;
}

/// <summary>
/// 对单词的冒泡排序
/// </summary>
/// <param name="word">待排序的数组</param>
/// <param name="n">个数</param>
void BubbleWord(char word[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (strcmp(word[j], word[j - 1]) < 0)
			{
				char temp[100];
				strcpy(temp, word[j]);
				strcpy(word[j], word[j - 1]);
				strcpy(word[j - 1], temp);
			}
		}
	}
}
