/*��һ�����е����ֵ��Ȼ��ͳ�Ƹ����ֵ���������г��ֵĴ�����
���룺Ԫ�ظ���n��n��������n < 200��
��������ֵ�����ֵĴ��������ݼ���һ�����Ÿ�����

cuishuning 2020/11
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	(void)scanf("%d", &n);

	int i = 1;
	int nextNum;
	(void)scanf("%d", &nextNum);
	int max = nextNum;
	int maxNum = 1;

	while (i < n)
	{
		(void)scanf("%d", &nextNum);
		if (nextNum == max)
		{
			maxNum++;
		}
		if (nextNum > max)
		{
			max = nextNum;
			maxNum = 1;
		}
		i++;
	}
	printf("%d,%d", max, maxNum);
	return 0;
}