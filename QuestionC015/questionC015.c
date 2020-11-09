/*从键盘输入一个位数不超过20位的无符号二进制整数，将其转换为十进制。
输入：二进制序列
输出：对应的十进制数。

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char inputBinaryString[20];
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