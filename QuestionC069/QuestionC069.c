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
#include<stdlib.h>

int main()
{
	int inputNum;
	(void)scanf("%d", &inputNum);
	inputNum = inputNum / 2;
	printf("%d ", inputNum);
	
	//数字转为字符串
	// number convert to string
	char str[200];
	_itoa(inputNum, str, 10);
	//转换为字母逐个取出输出
	//Take out one by one and output after converted to alphabeta
	int i = 0;
	while (str[i])
	{
		printf("%c", str[i++] - '0' + 'a');
	}
	return 0;
}
