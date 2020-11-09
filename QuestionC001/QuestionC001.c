/*从键盘输入一个小于等于1000的正整数x，
输出其平方根（为整数）。若输入数大于1000，
则输出0，并继续接受下一个输入直至小于等于1000。
（提示：使用求平方根函数sqrt需要包含<math.h>头文件）。

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	unsigned x;
	(void)scanf("%u", &x);  //输入正整数
	while (x > 1000)
	{
		printf("0\n");
		(void)scanf("%u", &x);  //接受下一个输入
	}
	printf("%d\n", (int)sqrt(x));
	return 0;
}
