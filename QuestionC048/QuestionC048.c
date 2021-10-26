/// <ID>C048</ID>
/// <date>2020/11</date>
/// <summary>
/// 计算银行存款本息。输入存款金额money（单位：元），存期years，
/// 年利率rate，计算到期存款本息（保留2位小数）
/// 计算公式sum = money*(1 + rate)^years
/// </summary>
/// <input>存款金额，存期，年利率。均为浮点数，且用逗号分隔</input>
/// <output>存款本息（保留2位小数）</output>
/// <sample>
/// 12345,5,0.03
/// 14311.24
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>01</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

int main()
{
	double money, rate, years;
	(void)scanf("%lf,%lf,%lf", &money, &years, &rate);
	//以下示例了保留2位小数的写法（会自动四舍五入）
	//The following example shows how to keep 2 decimal places 
	//(it will be automatically rounded)
	printf("%.2lf", money * pow((1 + rate), years));
	return 0;
}
