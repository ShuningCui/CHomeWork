/// <ID>C006</ID>
/// <date>2020/11</date>
/// <summary>
/// 企业发放的奖金根据利润提成。利润低于或等于10万元时，奖金可提10%；
/// 利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成8%；
/// 20万到40万之间时，高于20万元的部分，可提成5%；
/// 40万到60万之间时高于 40万元的部分，可提成3%；
/// 60万到100万之间时，高于60万元的部分，可提成2%，
/// 高于100万元时，超过100万元的部分按1%提成。
/// 编写程序，输入用户当月利润，输出发放奖金总数。
/// </summary>
/// <input>一个整数</input>
/// <output>一个整数</output>
/// <sample>
/// 12233478
/// 121700
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>01</difficulty>

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	long long profit;
	(void)scanf("%lld", &profit);
	if (profit <= 100000)
	{
		printf("%d", (int)(profit * 0.1));
		//如果不把结果强制转换为整数的话，会有一个警告；
		//该警告可以忽略并不影响程序的运行结果
		//If you do not cast the result to an integer, there will be a warning;
		//The warning can be ignoredand does not affect the running result of the program
		//printf("%d", profit * 0.1);
	}
	else if (profit > 100000 && profit <= 200000)
	{
		printf("%d", (int)(100000 * 0.1 + (profit - 100000) * 0.08));
	}
	else if (profit > 200000 && profit <= 400000)
	{
		printf("%d", (int)(100000 * 0.1 + 100000 * 0.08 + (profit - 200000) * 0.05));
	}
	else if (profit > 400000 && profit <= 600000)
	{
		printf("%d", (int)(100000 * 0.1 + 100000 * 0.08 + 200000 * 0.05
			       + (profit - 40000) * 0.03));
	}
	else if (profit > 600000 && profit <= 1000000)
	{
		printf("%d", (int)(100000 * 0.1 + 100000 * 0.08 + 200000 * 0.05
			       + 220000 * 0.03 + (profit - 600000) * 0.02));
	}
	else if (profit > 1000000)
	{
		printf("%d", (int)((100000 * 0.1 + 100000 * 0.08 + 200000 * 0.05
			       + 20000 * 0.03 + 400000 * 0.02 + profit - 100000) * 0.01));
	}
	return 0;
}
