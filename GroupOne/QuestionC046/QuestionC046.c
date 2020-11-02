/*输入总秒数，转换为相应的时、分、秒。提示：
在输出时，请使用下面的格式（变量名不要求一样）
printf("%d:%.2d:%.2d\n", h, m, s)
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int totalSecond;
	(void)scanf("%d", &totalSecond);
	printf("%d:%.2d:%.2d\n", totalSecond / 3600,
		(totalSecond % 3600) / 60, totalSecond % 3600 % 60);
	return 0;
}