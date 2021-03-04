/// <ID>C046</ID>
/// <date>2020/11</date>
/// <summary>
/// 输入总秒数，转换为相应的时、分、秒
/// </summary>
/// <input>1个整数</input>
/// <output>3个整数，冒号分割，分和秒不足2位时最高位补0</output>
/// <sample>
/// 1234567
/// 342:56:07
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>01</difficulty>
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
