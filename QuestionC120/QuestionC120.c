/*编写函数，去掉一个字符串中除头部和尾部空格外的所有空格，并编写主函数进行调用测试。
输入：
占一行（注：输入的字符串长度不会超过80）
输出：
占一行
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
    char inputStr[100];
    gets(inputStr);
    //找字符串左边第一个非空格字符
    int i = 0;
    while (inputStr[i] && inputStr[i] == ' ')
    {
        i++;
    }

    //找字符串右边第一个非空格字符
    int j = strlen(inputStr) - 1;
    while (inputStr[j] && inputStr[j] == ' ')
    {
        j--;
    }

    //删除i到j之间所有空格字符；
    while (j >= i)
    {
        if (inputStr[j] == ' ')
        {
            int n = j;
            while (inputStr[n])
            {
                inputStr[n] = inputStr[n + 1];
                n++;
            }
            inputStr[n] = 0;
        }
        j--;
    }
    printf("%s", inputStr);
    return 0;
}
 