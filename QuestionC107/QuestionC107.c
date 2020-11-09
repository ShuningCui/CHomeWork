/*输入两个整型数组（假设数组的大小为不超过10）的各个元素，
输出不是两个数组共有的元素，并从小到大排序输出。
输入：两个数组的元素（小于10个），数组中第一个数据指示元素的个数.
输出：两个数组的元素中非共有的元素, 并且从小到大进行排序.
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


int NumInput(int num[]);  //输入数据到数组中，返回输入数据的个数
int FindNoAltogether(int a[], int b[], int na, int nb, int c[], int nc);
void Bubble(int b[], int n);

int main()
{
	int num01[30];
	int num02[30];
	int nNum01, nNum02, nNoAltogether;  //数组数据个数
	int noAltogether[30];
	nNum01 = NumInput(num01);
	nNum02 = NumInput(num02);

	nNoAltogether = FindNoAltogether(num01, num02, nNum01, nNum02, noAltogether, 0);
	nNoAltogether += FindNoAltogether(num02, num01, nNum02, nNum01, noAltogether, nNoAltogether);

	Bubble(noAltogether, nNoAltogether);

	printf("%d", noAltogether[0]);
	for (int i = 1; i < nNoAltogether; i++)
	{
		printf(" %d", noAltogether[i]);
	}

	return 0;
}

/// <summary>
/// 输入数据到数组中，返回输入数据的个数
/// </summary>
/// <param name="num">输入数据的数组</param>
/// <returns>输入数据的个数</returns>
int NumInput(int num[])
{
	int n;
	(void)scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		(void)scanf("%d", &num[i]);
	}
	return n;
}

/// <summary>
/// 寻找在数组a中，但不在数组b中的数，将其从数组c的nc处开始存放，并返回找到的个数
/// </summary>
/// <param name="a">数组a</param>
/// <param name="b">数组b</param>
/// <param name="na">数组a中的数据个数</param>
/// <param name="nb">数组b中数据的个数</param>
/// <param name="c">数组c</param>
/// <param name="nc">数组c存放的起始位置</param>
/// <returns>找到的数据个数</returns>
int FindNoAltogether(int a[], int b[], int na, int nb, int c[], int nc)
{
	int n = 0;
	for (int i = 0; i < na; i++)
	{
		int flag = 0;
		for (int j = 0; j < nb; j++)
		{
			if (a[i] == b[j])   //有重复的则跳出循环
			{
				flag = 1;
				break;
			}
		}
		if (!flag)  //找到没有重复的
		{
			c[nc + n] = a[i];
			n++;
		}
	}
	return n;
}

/// <summary>
/// 冒泡排序, 从小到大
/// </summary>
/// <param name="b">待排序的数组</param>
/// <param name="n">数组个数</param>
void Bubble(int b[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (b[j] < b[j - 1])
			{
				int t = b[j];
				b[j] = b[j - 1];
				b[j - 1] = t;
			}
		}
	}
}
