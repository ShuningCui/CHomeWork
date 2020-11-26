/*输入一个字符串（其长度不超过81），
分别统计其中26个英文字母出现的次数（不区分大、小写字母），
并按字母出现次数从高到低排序，若次数相同，按字母顺序排列。
字母输出格式举例，例如：A - 3，表示字母A出现3次，
C - 0表示字母C没有出现。
输入：
第一行为输入，占一行
输出：
第二行为输出，占一行。按照字母输出格式从高到低输出，
各字母输出之间用一个空格字符分隔
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

typedef struct _count
{
	char alphabet;
	int c;
}Count;

void BubbleAlpha(Count count[]);

int main()
{
	Count count[26];
	//初始化
	for (int i = 0; i < 26; i++)
	{
		count[i].alphabet = 'A' + i;
		count[i].c = 0;
	}
	char input[100];
	scanf("%[^\n]", input);
	_strupr(input);  //转为大写字母
	
	int i = 0;
	while (input[i])
	{
		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			count[input[i] - 'A'].c++;
		}
		i++;
	}
	//排序
	BubbleAlpha(count);
	//输出
	printf("%c-%d", count[0].alphabet, count[0].c);
	for (int i = 1; i < 26; i++)
	{
		printf(" %c-%d", count[i].alphabet, count[i].c);
	}
	return 0;
}

void BubbleAlpha(Count count[])
{
	for (int i = 0; i < 26; i++)
	{
		for (int j = 25; j > i; j--)
		{
			if (count[j].c > count[j - 1].c)
			{
				Count temp = count[j];
				count[j] = count[j - 1];
				count[j - 1] = temp;
			}
		}
	}
}
