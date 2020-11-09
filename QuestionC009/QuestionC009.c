/*一个球从100米高度自由落下，
每次落地后反弹回原高度的一半，再落下，再反弹。
求其在第n次落地时，共经过了多少米？第n次反弹高度是多少？
输入 :
第n次的值, 整数
输出：小球经过的路程长度和小球反弹的高度，分2行输出。

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#define HIGH 100
int main()
{
	int n;
	(void)scanf("%d", &n);
	double length = HIGH;
	double nthHigh = HIGH;
	for (int i = 0; i < n; i++)
	{
		nthHigh = nthHigh / 2;
		length += nthHigh * 2;
		
	}
	printf("%lf\n%lf\n", length-nthHigh*2, nthHigh);
	return 0;
}
