/*定义一个含20个元素的整型数组并初始化为a[20] = { 1,2,3,4,5,6,7,8,9,10 }。
另外定义一个大小为10的整型数组b。
要求：输入整数n（1 <= n <= 10），然后输入n个整数存入b中，
再输入一个整数k（1 <= k <= 10），将数组b中的n个元素依次插入到数组a中从第k位开始的地方，
插入完成后，输出数组a（元素间用空格隔开）。
输入：整数n，n个整数，整数k。
输出：数组a

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int b[10];
	int n;
	(void)scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		(void)scanf("%d", &b[i]);
	}
	int k;
	(void)scanf("%d", &k);

	printf("%d", a[0]); //输出第一个数
	//输出前k个数
	for (int i = 1; i < k; i++)
	{
		printf(" %d", a[i]);
	}
	//输出k到n个数并改写a数组
	for (int i = k; i < k + n; i++)
	{
		a[i] = b[i - k];
		printf(" %d", a[i]);
	}
	//输出最后的数（10-k）
	for (int i = k + n; i < 10 + n; i++)
	{
		a[i] = 1 + i - n;
		printf(" %d", a[i]);
	}
	return 0;
}
