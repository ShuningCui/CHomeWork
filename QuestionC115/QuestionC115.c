/*统计选票。三个候选人分别是Li、Zhang和Wang， Li 的代号是1；Zhang的代号是2； Wang的代号是3。依次输入代表得票人代号的数字（即投票），直到输入 - 1则投票结束。然后统计每个人的得票数和废票数。不是 - 1, 1, 2, 3的数字为废票。
输入：若干整数，最后一个数是 - 1。（输入的每个数之间有空格）
输出：四个整数，以空格隔开，代表三个人的Li、Zhang、Wang的得票数以及废票数。
输出格式："%d %d %d %d\n"

Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int count[4] = {0};
	int n;
	scanf("%d", &n);
	while (n != -1)
	{
		n >= 1 && n <= 3 ? count[n]++ : count[0]++;
		scanf("%d", &n);
	}
	printf("%d %d %d %d", count[1], count[2],
	       count[3], count[0]);
	return 0;
}
