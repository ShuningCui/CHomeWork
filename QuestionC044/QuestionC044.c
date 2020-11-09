/*输入2个整数，求：和，差，积，商
输入：2个整数（第二个数是非零整数）
输出：4个整数，依次为和、差、积和商，数据间用空格分隔。

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int x, y;
	(void)scanf("%d%d", &x, &y);
	printf("%d %d %d %d\n", x + y, x - y, x * y, x / y);
	return 0;
}