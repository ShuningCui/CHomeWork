/*编写一个求数组中最小值元素及该元素位置的函数，并编写主函数调用。要求：由键盘输入10个数，并存放于整型数组中。若最小值有多个，返回第一次出现的位置。
提示：可以定义一个含整型数组，最小元素值和该元素位置的结构体变量。以保证函数能同时返回最小元素值和该元素位置。
输入输出格式：
输入：用户输入的10个数，用空格分隔。
输出：两个数字：第一个数字为数组中的最小元素值，第二个数字为该元素在数组中的下标位置（两个数用空格分开）；如有多个最小值，输出下标最小的一个。

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

typedef struct min
{
	int min;
	int minPosition;
} MinPos;

MinPos Find(int* a, int n);

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	MinPos minPos = Find(a, 10);
	printf("%d %d", minPos.min, minPos.minPosition);
	return 0;
}

MinPos Find(int* a, int n)
{
	MinPos minPos = {a[0], 0};
	for (int i = 1; i < n; i++)
	{
		if (a[i] < minPos.min)
		{
			minPos.min = a[i];
			minPos.minPosition = i;
		}
	}
	return minPos;
}
