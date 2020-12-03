/*输入两个字符串，统计第2个字符串（至少含2字符）
在第1个字符串中出现的次数。没有出现，次数为0.
输入：两个字符串，以空格分隔。
输出：出现次数，整数。
样例1：
banana  an
2
样例2：
bnnnn nn
3
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char in[500];
	char matchStr[20];

	scanf("%s%s", in, matchStr);
	int sum = 0;
	int i = 0;
	int j = 0;
	while (in[i])
	{
		int flag = 0;
		while (matchStr[j])
		{
			if (in[i] != matchStr[j])
			{
				flag = 1;
				break;
			}
			i++;
			j++;
		}
		flag == 0 ? sum++ : i++;
		j = 0;
	}
	printf("%d", sum);
	return 0;
}
