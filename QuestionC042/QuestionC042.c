/// <ID>C042</ID>
/// <date>2020/11</date>
/// <summary>
/// 从键盘输入任意3个整数，然后输出这3个数的平均值
/// </summary>
/// <input>3个整数</input>
/// <output>一个实数（使用%g输出）</output>
/// <sample>
/// 6 7 12
/// 8.33333
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>01</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	//输入3个数
	//input three numbers
	int a, b, c;
	(void)scanf("%d%d%d", &a, &b, &c);
	//注意表达式（a+b+c)前面的浮点数数转换，否则，整数除以整数将得到一个整数。
	//Pay attention to the floating-point number conversion in front of the expression (a+b+c), 
	//otherwise, the integer divided by the integer will get an integer.
	//也可以这样写：printf("%g", (a + b + c) / 3.0);
	//you can get the same result: printf("%g", (a + b + c) / 3.0);
	printf("%g", (float)(a + b + c) / 3);
	return 0;
}
