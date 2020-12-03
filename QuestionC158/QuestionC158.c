/*用户输入一个字符串，将字符串中的奇数位置上
的字符按字母表中的顺序排序，仍按顺序保存在奇位置上。
例如teacher，t, a, h, r排序后结果为a, h, r, t，
则结果字符串为：aehcret。
输入格式：长度小于100的字符串，
输出：奇数位置的字符排序后的字符串

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4267)

#include<stdio.h>
#include<string.h>

int main()
{
	char inStr[200] = { 0 };
	(void)scanf("%s", inStr);
	int len = strlen(inStr);
	len = len % 2 == 0 ? len - 1 : len;
	for (int i = 0; i < len; i += 2)
	{
		for (int j = len - 1; j > i; j -= 2)
		{
			if (inStr[j] < inStr[j - 2])
			{
				int temp = inStr[j];
				inStr[j] = inStr[j - 2];
				inStr[j - 2] = temp;
			}
		}
	}
	printf("%s", inStr);
	return 0;
}
