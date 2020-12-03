/*编程计算函数ack(m, n)的值，其中m, n定义域是非负整数(m <= 3, n <= 10)。
当m = 0时，ack(0, n) = n + 1
当n = 0时，ack(m, 0) = ack(m - 1, 1)
其它情况下，ack(m, n) = ack(m - 1, ack(m, n - 1))

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int ack(int m, int n);

int main()
{
	int m, n;
	(void)scanf("%d%d", &m, &n);
	printf("ack(%d,%d)=%d\r\n", m, n, ack(m, n));
	return 1;
}

int ack(int m, int n)
{
	if (m == 0)
	{
		return n + 1;
	}
	if (n == 0)
	{
		return ack(m - 1, 1);
	}
	return ack(m - 1, ack(m, n - 1));
}
