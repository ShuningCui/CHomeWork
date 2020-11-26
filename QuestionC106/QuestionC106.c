/*某部队进行新兵队列训练，将新兵从1开始按顺序依次编号，
并排成一行横队，训练的规则如下：
从头开始1至2报数，凡报到2的出列，
剩下的向小序号方向靠拢，再从头开始进行1至3报数，
凡报到3的出列，剩下的向小序号方向靠拢，
继续从头开始进行1至2报数，以后从头开始轮流进行1至2报数、
1至3报数直到剩下的人数不超过三人为止。
编写程序，输入数N为最开始的新兵人数（20 < N < 6000），
输出剩下的新兵最初的编号。
*/


#include<stdio.h>

#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int a[6000], n, i;
    int flag = 0;  //区分是1-2报数还是1-3报数
    scanf("%d", &n);
    for (i = 0; i < n; i++) //初始化数组
    {
        a[i] = i + 1;
    }
    while (n > 3)  //剩下的人数超过3人
    {
        if (flag == 0)  //1-2报数
        {
            for (i = 0; i < n; i++)
            {
                if ((i + 1) % 2 == 0)
                {
                    a[i] = 0;  //出队的标记为0
                }                   
            }
            flag = 1;
        }
        else   //1-3报数
        {
            for (i = 0; i < n; i++)
            {
                if ((i + 1) % 3 == 0)
                {
                    a[i] = 0;
                }
            }
            flag = 0;
        }
        n = Compress(a, n);
    }

    printf("%d %d %d", a[0],a[1],a[2]);
    return 0;
}

/// <summary>
/// 将数组中的0剔除，同时非0项前移
/// </summary>
/// <param name="a">数组</param>
/// <param name="n">需要处理的项数</param>
/// <returns>非零的数目</returns>
int Compress(int a[], int n)
{
    int i = 0, k;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            for (k = i; k <= n - 1; k++)
            {
                a[k] = a[k + 1];
            }          
            n = n - 1;
        }
    }
    return n;
}
