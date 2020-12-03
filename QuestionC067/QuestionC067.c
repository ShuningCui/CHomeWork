/*写出正整数的三位分节格式。
如，当用户输入82668634时，
程序应该输出82, 668, 634。
输入：正整数
输出：三位分解格式。
样例：
82668634
82, 668, 634

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	char num[200];
	int i = 0;

	while (n)
	{
		if ((i + 1) % 4 == 0) //加逗号的位置
		{
			num[i++] = ',';
		}
		num[i++] = n % 10 + '0'; //数字转字符
		n = n / 10;
	}

	for (int j = i - 1; j >= 0; j--) //倒序输出
	{
		printf("%c", num[j]);
	}
	return 0;
}
