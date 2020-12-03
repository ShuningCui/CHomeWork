/*每天一开始，第一个在机房里签字的人会打开门，最后一个签字的人会锁上门。根据签到的记录，你应该找到那天开门和锁门的人。
输入输出格式：
输入：每个案件都有一天的记录。案例以正整数M开头，M是记录总数，后跟M行，每行的格式为：ID_number Sign_in_time Sign_out_time，其中时间以HH : MM:SS格式给定，ID number是一个不超过15个字符的字符串。
输出：在一行中输出当天已解锁和锁定门的人员的ID号。这两个身份证号码必须用一个空格隔开。
注：保证记录一致。也就是说，每个人的签到时间必须早于签退时间，并且没有两个人同时签到或签退。
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

typedef struct _record
{
	char name[20];
	char inTime[20];
	char outTime[20];
} Record;

int main()
{
	Record record[30];
	int m;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%s%s%s", record[i].name, record[i].inTime
		      , record[i].outTime);
	}

	char name[20];
	strcpy(name, record[0].name);
	char time[20];
	strcpy(time, record[0].inTime);

	for (int i = 1; i < m; i++)
	{
		if (strcmp(time, record[i].inTime) > 0)
		{
			strcpy(name, record[i].name);
			strcpy(time, record[i].inTime);
		}
	}

	printf("%s", name);

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
