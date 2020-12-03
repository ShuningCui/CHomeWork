/*输入一行数字，如果我们把这行数字中的‘5’都看成空格，
那么就得到一行用空格分割的若干非负整数
（可能有些整数以‘0’开头，这些头部的‘0’应该被忽略掉，
除非这个整数就是由若干个‘0’组成的，这时这个整数就是0）。
你的任务是：对这些分割得到的整数，依从小到大的顺序排序输出。
输入输出格式：
输入：一行数字（数字之间没有空格），这行数字的长度不大于1000。
输入数据保证：分割得到的非负整数不会大于100000000；
输入数据不可能全由‘5’组成。
输出：分割得到的整数排序的结果，
相邻的两个整数之间用一个空格分开，每组输出占一行。


0051231232050775
Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int SplitString(char str[], char ch, char r[][100]);
int Convert(char str[]);
void Bubble(int a[], int n);

int main()
{
	char inputStr[1000];
	(void)scanf("%s", inputStr);
	//分割
	char splitStr[100][100];
	int n;
	n = SplitString(inputStr, '5', splitStr);
	//转换
	int num[100];
	for (int i = 0; i < n; i++)
	{
		num[i] = Convert(splitStr[i]);
	}
	//排序
	Bubble(num, n);
	//输出
	printf("%d", num[0]);
	for (int i = 1; i < n; i++)
	{
		printf(" %d", num[i]);
	}
	return 0;
}

int SplitString(char str[], char ch, char r[][100])
{
	int i = 0;
	int m = 0;
	int n = 0;
	while (str[i] == ch && str[i] != 0)
	{
		i++;
	}
	while (str[i] != 0)
	{
		while (str[i] != ch && str[i] != 0)
		{
			r[m][n] = str[i];
			n++;
			i++;
		}
		r[m][n] = 0;
		m++;
		n = 0;
		while (str[i] == ch && str[i] != 0)
		{
			i++;
		}
	}
	return m;
}

int Convert(char str[])
{
	int n = 0;
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		n = n * 10 + (str[i] - '0');
	}
	return n;
}

void Bubble(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}
