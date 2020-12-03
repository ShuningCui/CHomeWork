/*编写程序，要求在一个字符串中查找连续出现次数最多的一个字符，
并显示其所在的开始下标和次数。
(如果出现最多的字符不止一个，输出最靠前的字符)
输入：一个字符串
输出：出现最多的字符，次数，开始下标

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char in[200];
	scanf("%s", in);
	//初始时假设出现最多次数的字符是第一个字符
	char maxch = in[0];
	int maxi = 0; //出现次数做多的下标
	int max = 1; //出现的次数

	int i = 1; //循环检测的下标
	//当前的下标和次数统计
	int currenti = 0;
	int currentMax = 1;
	char currentChar = in[0];
	while (in[i])
	{
		while (in[i] == currentChar)
		{
			currentMax++;
			i++;
		}
		//替换
		if (currentMax > max)
		{
			max = currentMax;
			maxi = currenti;
			maxch = currentChar;
		}
		currentMax = 0;
		currentChar = in[i];
		currenti = i;
	}

	printf("%c %d %d", maxch, max, maxi);
	return 0;
}
