/*输入若干个整数，其值在0至4的范围内，
*用 - 1作为输入结束的标志，统计每个整数的个数。
*输入：[0, 4]内的整数组成的序列，最后是 - 1，用空格隔开。
*输出：0, 1, 2, 3, 4的统计个数，用一个空格隔开。

* Cui Shuning (崔舒宁）2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//这道题用数组做要简单很多
//考虑到学生做此题时还未学习数组，故本题解答未用数组
//在题末以注释的方式给了数组的解答

int main()
{
	//0-4的个数
	//number of 0-4
	int countZero = 0;
	int countOne = 0;
	int countTwo = 0;
	int countThree = 0;
	int countFour = 0;

	int inputNumber = 0;
	(void)scanf("%d", &inputNumber);
	while (inputNumber != -1)
	{
		switch (inputNumber)
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
		(void)scanf("%d", &inputNumber);
	}

	printf("%d %d %d %d %d\n", countZero,
	       countOne, countTwo, countThree, countFour);
	return 0;
}

/*
int main()
{
	int stat[5] = { 0 };
	int input = 0;
	(void)scanf("%d", &input);
	while (input != -1)
	{
		stat[input]++;
		(void)scanf("%d", &input);
	}
	printf("%d", stat[0]);
	for (int i = 1; i < 5; i++)
	{
		printf(" %d", stat[i]);
	}
}
*/
