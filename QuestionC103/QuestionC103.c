/*有n个人围成一圈，从1顺序排号。从第一个人开始报数（1~3报数），凡报到3的人退出圈子，问最后留下的人原来排在第几号。
输入：人数，不超过100人。
输出：最后留下的人的编号
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int Josephus(int num, int chooseNum);

int main()
{
	int n;
	(void)scanf("%d", &n);
	printf("%d", Josephus(n, 3));
	return 0;
}


int Josephus(int num, int chooseNum)
{
	//表示小孩的数组
	int boy[200];
	for (int i = 0; i < num; i++)
	{
		boy[i] = i + 1; //给小孩编号
	}

	int k = 1; //第k个离开的小孩
	int n = -1; //数组下标，下一个为0表示从第一个孩子开始数数
	while (1)
	{
		//在圈中开始剔除
		for (int j = 0; j < chooseNum;)
		{
			n = (n + 1) % num;
			if (boy[n] != 0)
			{
				j++; //如果该小孩还在圈中，则参加计数
			}
		}
		if (k == num)
		{
			break;
		} //如果已经全部剔除完成，则跳出循环
		boy[n] = 0;
		k++;
	}
	// break语句跳转至此，返回胜利者编号
	return boy[n];
}
