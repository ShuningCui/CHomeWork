/// <ID>C136</ID>
/// <date>2020/11</date>
/// <summary>
/// 每天一开始，第一个在机房里签字的人会打开门，最后一个签字的人会锁上门。
/// 根据签到的记录，你应该找到那天开门和锁门的人。
/// 每个人的签到时间必须早于签退时间，并且没有两个人同时签到或签退。
/// </summary>
/// <input>一天的记录，记录以正整数M开头，M是记录总数，后跟M行，每行的格式为：
/// ID_number Sign_in_time Sign_out_time，
/// 其中时间以HH : MM:SS格式给定，ID number是一个不超过15个字符的字符串。
/// </input>
/// <output>在一行中输出当天开锁和锁门的人员的ID号。这两个ID号必须用一个空格隔开</output>
/// <sample>
/// 4 
/// CS200111 09:20 : 22 17 : 00 : 01
/// CS200001 09 : 20 : 00 17 : 30 : 00
/// CS301010 09 : 21 : 00 17 : 30 : 59
/// CS301213 09 : 23 : 00 12 : 00 : 00
/// CS200001 CS301010
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>03</difficulty>
#pragma warning(disable:6001)
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

typedef struct _record
{
	char name[20];
	char inTime[20];
	char outTime[20];
}Record;

int main()
{
	Record record[30];
	int m;
	(void)scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		(void)scanf("%s%s%s", record[i].name, record[i].inTime
		      , record[i].outTime);
	}

	char name[20];
	strcpy(name, record[0].name);
	char time[20];
	strcpy(time, record[0].inTime);

	//寻找最早进入的
	for (int i = 1; i < m; i++)
	{
		if (strcmp(time, record[i].inTime) > 0)
		{
			strcpy(name, record[i].name);
			strcpy(time, record[i].inTime);
		}
	}

	printf("%s", name);

	//寻找最晚离开的
	strcpy(name, record[0].name);
	strcpy(time, record[0].outTime);

	for (int i = 1; i < m; i++)
	{
		if (strcmp(time, record[i].outTime) < 0)
		{
			strcpy(name, record[i].name);
			strcpy(time, record[i].outTime);
		}
	}
	printf(" %s", name);
	return 0;
}
