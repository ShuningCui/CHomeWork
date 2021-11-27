/// <ID>C070</ID>
/// <date>2020/11</date>
/// <summary>
/// 查找同时在第一个数组和第二个数组中的全部元素。
/// 首先输入数组a的元素个数，再输入数组a的各个元素的值，接着输入数组b的元素个数，
/// 再输入数组b的各个元素的值，输出同时在两个数组的全部元素。
/// </summary>
/// <input>2个数组中元素的个数级数值（每个数组中没有重复元素）</input>
/// <output>同时在两个数组的全部元素</output>
/// <sample>
/// 3
/// 1 2 3
/// 5
/// 1 3 5 7 9
/// 1 3
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>03</difficulty>

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a[100], b[100];
	int an, bn; //a和b中的元素个数
	(void)scanf("%d", &an);

	for (int i = 0; i < an; i++)
	{
		(void)scanf("%d", &a[i]);
	}

	(void)scanf("%d", &bn);
	for (int i = 0; i < bn; i++)
	{
		(void)scanf("%d", &b[i]);
	}

	int ab[100]; //挑出的数放到ab中
	int abn = 0; //挑出数的个数

	for (int i = 0; i < an; i++)
	{
		for (int j = 0; j < bn; j++)
		{
			if (a[i] == b[j])
			{
				ab[abn++] = a[i];
				//同时从a,b中删除相同的元素
				for (int k = i; k < an - 1; k++)
				{
					a[k] = a[k + 1];
				}
				for (int k = j; k < bn - 1; k++)
				{
					b[k] = b[k + 1];
				}
				an--;
				bn--;
				i--;
				j--;
			}
		}
	}

	for (int i = 0; i < abn; i++)
	{
		i == 0 ? printf("%d", ab[i]) : printf(" %d", ab[i]);
	}
	return 0;
}
