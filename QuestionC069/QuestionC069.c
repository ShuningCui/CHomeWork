/// <ID>C069</ID>
/// <date>2020/11</date>
/// <summary>
/// 输入一个整数，将它除以2；再将除以2后所得数字的整数部分的各位用相应序号的字母替代。
/// 替换原则：0换为a，1换为b，2换为c，...，以此类推，9换为j。
/// 例如，1234, 除以2等于617，替换结果为gbh
/// </summary>
/// <input>一个正整数</input>
/// <output>除2后的整数整数部分和字符串，中间以一个空格隔开</output>
/// <sample>
/// 1234
/// gbh
/// </sample>
/// <sample>
/// 156790
/// 78395 hidjf
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>03</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int inputNum;
	(void)scanf("%d", &inputNum);
	inputNum = inputNum / 2;
	printf("%d ", inputNum);
	//反转数字inputnum
	//Invert inputnum
	int resverseInputNum = 0;
	while (inputNum)
	{
		resverseInputNum = resverseInputNum * 10 +
			inputNum % 10;
		inputNum /= 10;
	}
	//将反转后的数字从各位逐个取出输出
	//Take out the inverted numbers from each bit one by one and output
	while (resverseInputNum)
	{
		printf("%c", resverseInputNum % 10 + 'a');
		resverseInputNum /= 10;
	}
	return 0;
}
