/*某城市最高的楼有一部电梯，该电梯依照输入楼层数的先后次序运行。
电梯最初在0层。运行完一个输入序列后就停止在该楼层，不返回0层。
编写程序计算电梯运行一个序列的时间。
电梯每上1层需要6秒。每下1层需要4秒。
如在某层停留，无论上下人多少，均停留5秒。
楼层的值大于等于1，小于100, 0在序列中表示结束序列输入。
程序输入电梯运行序列，输出电梯运行时间（秒）。
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int sum = 0;
	int floor = 0;
	int nextFloor;
	(void)scanf("%d", &nextFloor);
	while (nextFloor > 0)
	{
		int floorNum = nextFloor - floor;
		sum = sum + 5 +
			(floorNum > 0 ? floorNum * 6 : -floorNum * 4);
		floor = nextFloor;
		(void)scanf("%d", &nextFloor);
	}
	printf("%d", sum);
	return 0;
}