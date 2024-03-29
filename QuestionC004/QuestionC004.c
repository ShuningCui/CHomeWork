/// <ID>C004</ID>
/// <date>2020/11</date>
/// <summary>
/// 某个公司采用公用电话传递数据，数据是四位的整数，
/// 在传递过程中是加密的，加密规则如下：
/// 1. 每位数字都用自身加上5后的和除以10的余数代替，
/// 如1用6代替，8用3代替；如3768就转换为8213；
/// 2. 再将第一步生成的数字的第一位和第四位交换，
/// 第二位和第三位交换。 如8213转换为3128，即为最终的加密密码。
/// </summary>
/// <input>1个整数</input>
/// <output>一个整数</output>
/// <sample>
/// 1234
/// 9876
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int teleNum;
	(void)scanf("%d", &teleNum);
	//分解并加密
	//Decompose and encrypt
	int a0 = (teleNum % 10 + 5) % 10;
	int a1 = ((teleNum / 10) % 10 + 5) % 10;
	int a2 = ((teleNum / 100) % 10 + 5) % 10;
	int a3 = (teleNum / 1000 + 5) % 10;

	printf("%d", a0 * 1000 + a1 * 100 + a2 * 10 + a3);
	return 0;
}
