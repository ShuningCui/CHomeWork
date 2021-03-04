/// <ID>C119</ID>
/// <date>2020/11</date>
/// <summary>
/// 从键盘输入一个32位的二进制形式的IP地址，将其转换为点分十进制的表示，
/// 如果输入的字符串中含有1和0以外的字符，则输出“该字符串不是正确的IP地址”。
/// 输入：0、1二进制序列，不会超过32位，位数不足时程序自动在前面补0
/// </summary>
/// <input>0、1二进制序列，不会超过32位</input>
/// <output>IP地址</output>
/// <sample>
/// 101111001010101001010101
/// 0.188.170.85
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>03</difficulty>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4267)

#include<stdio.h>
#include<string.h>

int main()
{
	char inputStr[33] = { 0 };
	char checkedStr[33] = {0};
	(void)scanf("%s", inputStr);
	//将输入的字符串检查后copy到checkedStr数组
	//从最后一位开始，高位不足补0；
	int m = strlen(inputStr) - 1;
	int n = 31;

	while (m >= 0)
	{
		if (inputStr[m] == '1' || inputStr[m] == '0')
		{
			checkedStr[n--] = inputStr[m--];
		}
		else
		{
			printf("该字符串不是正确的IP地址");
			return 0;
		}
	}
	while (n >= 0) //高位不足补0
	{
		checkedStr[n--] = '0';
	}

	//转化位整数
	for (int i = 0; i < 4; i++)
	{
		int ip = 0;
		int right = 128; //2的7次方
		for (int j = i * 8; j < i * 8 + 8; j++)
		{
			ip = ip + (checkedStr[j] - '0') * right;
			right /= 2;
		}
		i == 0 ? printf("%d", ip) : printf(".%d", ip);
	}
	return 0;
}
