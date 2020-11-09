/*求a + aa + aaa + aaaa + … + aa...a（n个），其中a为1～9之间的整数。
例如：当a = 1, n = 3时，求1 + 11 + 111之和为123；
输入：组成序列的数字a和求和项的数量n
输出：算式和结果。

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, n;
	(void)scanf("%d%d", &a, &n);
	int sum = a;
	printf("%d", a);
	int aa = a;
	for (int i = 0; i < n - 1; i++)
	{
		a = a * 10 + aa;  //递推得到下一项
		printf("+%d", a);
		sum += a;   //累加
	}
	printf("=%d\n", sum);
	return 0;
}