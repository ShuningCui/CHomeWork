/*编写程序，计算下列多项式的值:
 *poly(n, x) = 1, 当 n = 0；
 *poly(n, x) = x, 当 n = 1；
 *poly(n, x) = ((2 * n - 1) * x * poly(n - 1, x) - (n - 1) * poly(n - 2, x)) / n, 当 n > 1；
 *输入：n和x，格式："%d%lf"。
 *输出：第n个多项式在x处的值，格式："%lf\n"。
 *
 *Cui Shuning (崔舒宁）2020/11
 */


#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

double Poly(int n, double x);

int main()
{
	int n;
	double x;
	(void)scanf("%d%lf", &n, &x);
	double y = Poly(n, x);
	printf("%lf\n", y);
	return 0;
}

double Poly(int n, double x)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return x;
	return ((2 * (double)n - 1) * x * Poly(n - 1, x) -
		((double)n - 1) * Poly(n - 2, x)) / n;
}
