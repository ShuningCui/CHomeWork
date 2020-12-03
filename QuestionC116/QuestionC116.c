/*输入公元年、月、日三个整数值，
计算该日是该年的第几天（应考虑闰年）。
输入，三个整数，表示年、月、日
输出，一个整数，表示当年第几天

Cui Shuning (崔舒宁）2020/11
*/


#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int IsLeapyear(int year);

int main()
{
	const int totalDays[12] =
		{0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

	int year, month, day;
	(void)scanf("%d%d%d", &year, &month, &day);
	int days = totalDays[month - 1] + day;
	if (IsLeapyear(year) && month > 2)
	{
		days++; //闰年+1
	}
	printf("%d", days);
	return 0;
}


/// <summary>
/// 判断是否为闰年
/// </summary>
/// <param name="year">年份</param>
/// <returns>是，返回1，否，0</returns>
int IsLeapyear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
