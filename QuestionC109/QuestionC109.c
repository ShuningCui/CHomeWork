/*输入任意长度的字符串，分别统计其中大写字母，小写字母，数字字符及其它字符的个数并输出统计结果，
再按统计值从多到少依次输出。
提示：测试用例输出的冒号是中文冒号。
输入：任意长度的字符串。
输出：统计其中大写字母，小写字母，数字字符及其它字符的个数。
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

typedef struct _count
{
	char kind[20];
	int c;
}Count;

int main()
{
	Count count[4] = { {"大写字母：",0},{"小写字母：",0},
		{"数字字符：",0},{"其它字符：",0} };
	char countStr[200];
	scanf("%s", countStr);

	int i = 0;
	while (countStr[i])
	{
		if ('A' <= countStr[i] && countStr[i] <= 'Z')
		{
			count[0].c++;
		}
		else if ('a' <= countStr[i] && countStr[i] <= 'z')
		{
			count[1].c++;
		}
		else if ('0' <= countStr[i] && countStr[i] <= '9')
		{
			count[2].c++;
		}
		else
		{
			count[3].c++;
		}
		i++;
	}

	//输出
	for (int i = 0; i < 4; i++)
	{
		printf("%s%d ", count[i].kind, count[i].c);
	}

	//排序
	for (int i = 0; i < 4; i++)
	{
		for (int j = 3; j > i; j--)
		{
			if (count[j].c > count[j - 1].c)
			{
				Count t = count[j];
				count[j] = count[j - 1];
				count[j - 1] = t;
			}
		}
	}

	//输出
	printf("从多到少依次输出如下： ");
	for (int i = 0; i < 3; i++)
	{
		printf("%s%d ", count[i].kind, count[i].c);
	}
	printf("%s%d", count[3].kind, count[3].c);

	return 0;
}