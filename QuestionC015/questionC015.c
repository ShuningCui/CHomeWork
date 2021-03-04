/// <ID>C105</ID>
/// <date>2020/11</date>
/// <summary>
/// 从键盘输入一个位数不超过20位的无符号二进制整数，将其转换为十进制。
/// </summary>
/// <input>二进制序列(字符串）</input>
/// <output>对应的十进制数（整数）</output>
/// <sample>
/// 1001100101010101
/// 39253
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>02</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char inputBinaryString[50];
	(void)scanf("%s", inputBinaryString);

	int x = 0;
	int i = 0;
	while (inputBinaryString[i])
	{
		x = x * 2 + inputBinaryString[i++] - '0';
	}

	printf("%d", x);
	return 0;
}
