/*输入若干个整数，其值在0至4的范围内，用 - 1作为输入结束的标志，统计每个整数的个数。
输入：[0, 4]内的整数组成的序列，最后是 - 1，用空格隔开。
输出：0, 1, 2, 3, 4的统计个数，用一个空格隔开。
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int countZero = 0;  //0的个数
	int countOne = 0;
	int countTwo = 0;
	int countThree = 0;
	int countFour = 0;

	int input = 0;
	(void)scanf("%d", &input);
	while (input != -1)
	{
		switch (input)
		{
		case 0:
			countZero++;
			break;
		case 1:
			countOne++;
			break;
		case 2:
			countTwo++;
			break;
		case 3:
			countThree++;
			break;
		case 4:
			countFour++;
			break;
		}
		(void)scanf("%d", &input);
	}

	printf("%d %d %d %d %d\n", countZero,
		countOne, countTwo, countThree, countFour);
	return 0;
}