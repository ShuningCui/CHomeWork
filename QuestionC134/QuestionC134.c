/*编写函数，寻找具有n个元素的一维数组中的最大值和最小值，并返回数组元素的平均值，函数原形如下：
double fun(int a[], int n, int* max, int* min);
输入输出格式：
输入：用户输入的n + 1个数，用空格分隔。第一个数为数组元素个数n。
输出：3个数字：第一个数字为数组中的最大元素值，第二个数字为数组中的最小元素值，
第三个数字为数组元素的平均值（保留小数点后6位有效数字)。3个数用空格分开。
*/


#include<stdio.h>

double fun(int a[], int n, int* max, int* min);

int main()
{
	int n;
	int a[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int max;
	int min;
	double average = fun(a, n, &max, &min);
	printf("%d %d %lf", max, min, average);
	return 0;
}
double fun(int a[], int n, int* max, int* min)
{
	double sum = 0;    //求和
	*max = *min = a[0]; //最大最小

	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		if (a[i] > * max)
		{
			*max = a[i];
		}
		if (a[i] < *min)
		{
			*min = a[i];
		}
	}

	return sum / n;
}
