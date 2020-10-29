/*输入整数a和b，
*若a* a + b * b大于等于100，
*则输出a * a + b * b百位及以上的数字，
否则输出a * a + b * b。
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, b;
	(void)scanf("%d %d", &a, &b);
	int c = a * a + b * b;
	printf("%d", c >= 100 ? c / 100 : c);
	return 0;
}