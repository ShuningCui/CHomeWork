/*在医院打点滴（吊针）的时候，如果滴起来有规律，先是滴一滴，
停一下；然后滴二滴，停一下；再滴三滴，停一下...，现在有一个问题：
这瓶盐水一共有v毫升，每一滴是d毫升，
每一滴的速度是一秒（假设最后一滴不到d毫升，则花费的时间也算一秒），
停一下的时间也是一秒，这瓶水什么时候能滴完呢？（0 < d < v < 6000)
输入：一滴是多少毫升和一瓶盐水有多少毫升，中间用空格隔开.
输出：滴完需要多少时间.

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	float d, v;
	(void)scanf("%f%f", &d, &v);
	int totalInterval = 0;
	int n = 1;
	int t = (int)(v / d); //是否是整倍数
	int time = v / d - t > 0 ? t + 1 : t; //统计滴的次数
	while (v > 0) //统计间隔次数
	{
		for (int i = 0; i < n; i++)
		{
			v = v - d;
			if (v <= 0)
			{
				break;
			}
		}
		totalInterval++; //统计间隔次数
		n++;
	}
	printf("%d", time + totalInterval - 1);
	return 0;
}
