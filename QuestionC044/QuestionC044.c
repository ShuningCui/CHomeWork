/// <ID>C044</ID>
/// <date>2020/11</date>
/// <summary>
/// 输入2个整数，求：和，差，积，商
/// </summary>
/// <input>2个整数（第二个数是非零整数）</input>
/// <output>4个整数，依次为和、差、积和商，数据间用空格分隔</output>
/// <sample>
/// 33 27
/// 60 6 891 1
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>01</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int x, y;
	(void)scanf("%d%d", &x, &y);
	printf("%d %d %d %d\n", x + y, x - y, x * y, x / y);
	return 0;
}
