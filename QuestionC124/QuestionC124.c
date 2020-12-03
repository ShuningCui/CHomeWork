//有n名学生，每个学生的数据包括学号、姓名、三门课的成绩。可以从键盘输入n个学生的数据，
///按总成绩从小到大排序，打印包含学号、姓名、三门课成绩和总成绩的成绩单。（测试时，数据从键盘输入。）
//输入：第1行为整数n，后面n行表示n个人的信息，包括学号、姓名、和三门课的成绩，每行的数据间用空格隔开。
//输出：n行，表示n个人的信息，包括学号、姓名、三门课的成绩和总成绩，数据间一个空格，末尾无空格。
//Cui Shuning (崔舒宁）2020/11

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

typedef struct _GradeList
{
	char id[20];
	char name[30];
	int course01;
	int course02;
	int course03;
	int total;
} GradeList;

void GradeBubble(GradeList* glist, int n);

int main()
{
	GradeList glist[100];
	int n;
	(void)scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		(void)scanf("%s%s%d%d%d",
		      glist[i].id, glist[i].name, &glist[i].course01,
		      &glist[i].course02, &glist[i].course03);
		glist[i].total = glist[i].course01 + glist[i].course02 + glist[i].course03;
	}

	GradeBubble(glist, n);

	for (int i = 0; i < n; i++)
	{
		printf("%s %s %d %d %d %d\n",
		       glist[i].id, glist[i].name, glist[i].course01,
		       glist[i].course02, glist[i].course03, glist[i].total);
	}
	return 0;
}


/// <summary>
/// 按总成绩排序
/// </summary>
/// <param name="glist">成绩表</param>
/// <param name="n">个数</param>
void GradeBubble(GradeList* glist, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (glist[j].total < glist[j - 1].total)
			{
				GradeList temp = glist[j];
				glist[j] = glist[j - 1];
				glist[j - 1] = temp;
			}
		}
	}
}
