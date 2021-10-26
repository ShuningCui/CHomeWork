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
	//以下 %.2d示例了显示2位宽度整数的写法，不足补0。超出则忽略宽度设置
	//The following %.2d shows an example of writing a 2-digit wide integer, 
	//and 0 is not enough. Ignore the width setting if it exceeds
	printf("%d:%.2d:%.2d\n", totalSecond / 3600,
	       (totalSecond % 3600) / 60, totalSecond % 3600 % 60);
	
	return 0;
}
