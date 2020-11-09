/*一个数组A中存有n（n > 0）个整数，在不允许使用另外数组的前提下，将每个整数，循环向右移m（m >= 0）个位置，
即将A中的数据由（A0A1……An - 1）变换为（An - m…… An - 1A0A1……An - m - 1）（
最后m个数循环移至A的最前面的m个数）。
输入n(1 <= n <= 100)、m（m >= 0）及n个整数，
输出循环右移m位以后的整数序列。
输入：
占二行，其中
第1行输入n和m两个数，n和m之间用空格分隔。
第2行输入数组A中的n个数，数据间用空格分隔。
输出：
占一行，数据间用一个空格分隔。
样例：
10 5
1 2 3 4 5 6 7 8 9 0

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a[100];  //要移动的数组
	int n, m;   //数组中有n个数，移动m次
	(void)scanf("%d%d", &n, &m);
	
	//将n个数读入数组
	for (int i = 0; i < n; i++)
	{
		(void)scanf("%d", &a[i]);
	}
	//循环移动
	for (int i = 0; i < m; i++)
	{
		int x = a[n - 1];
		for (int j = n - 2; j >= 0; j--)
			a[j + 1] = a[j];
		a[0] = x;
	}
	//输出
	for (int i = 0; i < n; i++)
	{
		i == 0 ? printf("%d", a[i]) : printf(" %d", a[i]);
	}

	return 0;
}