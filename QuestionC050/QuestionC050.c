/*编写程序检验由三边能否构成三角形，检验方法是任意两边和均要大于第三边。
输入 : 三边长度
输出：若果可以构成，输出YES，否则输出ERROR DATA
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{	
	double a, b, c;
	(void)scanf("%lf%lf%lf", &a, &b, &c);
	if (a + b > c && b + c > a && c + a > b)
	{
		printf("YES");
	}
	else
	{
		printf("ERROR DATA");
	}
	return 0;
}
