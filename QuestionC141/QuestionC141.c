/*编写冒泡排序函数，函数原型：void BubbleSort(int a[], int n); 对n个整数升序排序。
编写选择排序函数，函数原型：void SelectionSort(int a[], int n); 对n个整数降序排序。
编写main函数，输入10个整数，利用函数将其按升序和降序分别输出排序结果。
（输入输出数据间用一个空格分隔）

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void BubbleSort(int a[], int n);
void SelectionSort(int a[], int n);

#define NUM 10

int main()
{
	int a[NUM];
	for (int i = 0; i < NUM; i++)
	{
		(void)scanf("%d", &a[i]);
	}
	BubbleSort(a, NUM);
	for (int i = 0; i < NUM; i++)
	{
		printf("%d ", a[i]);
	}
	SelectionSort(a, NUM);
	printf("%d", a[0]);
	for (int i = 1; i < NUM; i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}

void SelectionSort(int a[], int n)
{
	int biggest;
	for (int i = 0; i < n - 1; i++)
	{
		biggest = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] > a[biggest])
				biggest = j;
		}
		int temp = a[biggest];
		a[biggest] = a[i];
		a[i] = temp;
	}
}

/// <summary>
/// 冒泡排序
/// </summary>
/// <param name="a">带排序的数组</param>
/// <param name="n">排序的个数</param>
void BubbleSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				int t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
	}
}
