/// <ID>C041</ID>
/// <date>2020/11</date>
/// <summary>
/// 叛逆期的小明什么都喜欢反着做，连看数字也是如此（负号除外），
/// 比如：小明会把1234它看成4321；把 - 1234看成 - 4321；
/// 把230看成032(032 = 32)；把 - 230看成 - 032(-032 = -32)。
/// 现在，小明做了一些a + b和a - b的题目(a, b为整数且不含前导0)，
/// 如果给你这些题目正确的答案，你能猜出小明会做得到什么答案吗？
/// </summary>
/// <input>两个整数x, y(-1000000，1000000), x表示a + b的正确答案，y表示a - b的正确答案。</input>
/// <output>两个整数s t，之间用一个空格分开，其中s表示小明将得到的a + b答案，t表示小明将得到的a - b答案</output>
/// <sample>
/// 45 78
/// -45 77
/// </sample>
/// <sample>
/// -78 90
/// -42 54
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>03</difficulty>
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Resverse(int x);

int main()
{
	int x, y;
	(void)scanf("%d%d", &x, &y);
	int a = (x + y) / 2;
	int b = (x - y) / 2;
	a = a > 0 ? Resverse(a) : -Resverse(-a);
	b = b > 0 ? Resverse(b) : -Resverse(-b);
	printf("%d %d", a + b, a - b);
	return 0;
}

/// <summary>
/// 将x反转，如123反转位321
/// Invert x, such as 123 inverts to 321
/// </summary>
/// <param name="x">带反转的数</param>
/// <returns>反转后的结果</returns>
int Resverse(int x)
{
	int resx = 0;
	while (x)
	{
		resx = resx * 10 + x % 10;
		x /= 10;
	}
	return resx;
}
