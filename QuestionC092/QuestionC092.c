/*编写程序，将s所指字符串中除了下标（从0开始）为奇数、
同时ascii值也为奇数的字符之外，其余的所有字符都删除，
串中剩余字符所形成的一个新串放在t所指的一个数组中并显示。
若没有满足条件的字符，显示“#”。字符串长度不超过200.
输入：长度不超过200的字符串（无空格）。
输出：处理后的字符串。
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char inputStr[200];
	char t[200] = { 0 };
	(void)scanf("%s", inputStr);
	
	int i = 0, j = 0;  //2个数组的下标指示
	while (inputStr[i])
	{
		if (i % 2 == 1 && inputStr[i] % 2 == 1)
		{
			t[j++] = inputStr[i];
		}
		i++;
	}
	printf("%s", t[0] ? t : "#");
	return 0;
}