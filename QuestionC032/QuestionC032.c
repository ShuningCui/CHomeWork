/*水仙花数”是指一个三位正整数，其各位数字的立方和确好等于该数本身，如：153＝1 ^ 3＋5 ^ 3＋3 ^ 3 （其中 ^ 表示乘方，5 ^ 3表示5的3次方），则153是一个“水仙花数”。
输入n, m，100 <= n, m < 1000, 求出[n, m]之间的水仙花数。若该区间没有水仙花数，输出 - 1.
输入：n, m，用空格隔开。
输出：若干水仙花数，用空格隔开。

cuishuning 2020/11
*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
    int n, m;
    (void)scanf("%d%d", &n, &m);
    int firstFind = 0;
    for (int i = n; i <= m; i++)
    {
        int i0 = i % 10;
        int i1 = (i / 10) % 10;
        int i2 = i / 100;
        if (i == i0 * i0 * i0 + i1 * i1 * i1 + i2 * i2 * i2)
        {
            if (firstFind == 0)
            {
                printf("%d", i);
                firstFind = 1;
            }
            else
            {
                printf(" %d", i);
            }
        }
    }
    if (firstFind == 0)
    {
        printf("-1");
    }
    return 0;
}