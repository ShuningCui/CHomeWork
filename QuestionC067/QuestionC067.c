/// <ID>C067</ID>
/// <date>2020/11</date>
/// <summary>
/// 写出正整数的三位分节格式。如，当用户输入82668634时，程序应该输出82,668,634。
/// </summary>
/// <input>正整数</input>
/// <output>三位分解格式</output>
/// <sample>
/// 82668634
/// 82,668,634
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>03</difficulty>
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n;
	(void)scanf("%d", &n);

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
