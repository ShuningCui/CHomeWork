/*K进制数的转换。输入非负整数a将其转换为K进制数，2 <= K <= 32。K进制数使用的符号是0～9, A, ...  (使用的字母为大写)。
输入：一个十进制非负整数a和一个正整数K, 2 <= K <= 32。
输出：K进制表示的整数。
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

char* IntToString(char* num, int n, int radix);

int main()
{
	int n;
	int k;
	scanf("%d%d", &n, &k);
	char num[100];
	printf("%s", IntToString(num, n, k));
	return 0;
}

/// <summary>
/// 将整数按指定的进制（2<=radix<=32) 分解为字符串
/// </summary>
/// <param name="num">num, the decomposed character string，分解后存放结果的字符串</param>
/// <param name="n">n, the integer will be decomposed，带分解的整数</param>
/// <param name="radix">radix, the specified base，指定的进制</param>
/// <returns>the pointer of the decomposed character string,
///that is the pointer of num，指向分解后的字符串的指针，也就是指向num的指针</returns>
char* IntToString(char* num, int n, int radix)
{
	int i = 0;
	if (n == 0)
	{
		strcpy(num,"0");
	}
	else
	{
		while (n)
		{
			int m = n % radix;
			if (0 <= m && m <= 9)  //convert it to ASCII code
			{
				num[i++] = m + '0';
			}
			else   //convert it to 'A'-'F' over 10
			{
				num[i++] = m - 10 + 'A';
			}
			n = n / radix; //the next number
		}
		num[i] = 0;
		_strrev(num);  //reverse the string
	}
	return num;
}
