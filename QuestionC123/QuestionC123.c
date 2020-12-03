//编写一个程序，读入n个用户姓名和电话号码，
//按姓名的字典顺序排列后，
//输出用户的姓名和电话号码，n从键盘输入。
//
//Cui Shuning (崔舒宁）2020/11

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

typedef struct _PhoneList
{
	char name[30];
	char phoneNum[20];
} PhoneList;

void PhoneBubble(PhoneList* plist, int n);

int main()
{
	PhoneList plist[100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s%s", plist[i].name, plist[i].phoneNum);
	}
	PhoneBubble(plist, n);

	for (int i = 0; i < n; i++)
	{
		printf("%s %s\n", plist[i].name, plist[i].phoneNum);
	}
	return 0;
}

/// <summary>
/// 按人名的字典序排序
/// </summary>
/// <param name="plist">电话号码本</param>
/// <param name="n">个数</param>
void PhoneBubble(PhoneList* plist, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (strcmp(plist[j].name, plist[j - 1].name) < 0)
			{
				PhoneList temp = plist[j];
				plist[j] = plist[j - 1];
				plist[j - 1] = temp;
			}
		}
	}
}
