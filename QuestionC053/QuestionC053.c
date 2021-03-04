/// <ID>C053</ID>
/// <date>2020/11</date>
/// <summary>
/// 输入由4个字母构成的英文单词，按如下格式输出字母，
/// 该字母的ASCII码以及该字母的后继字符
/// 每行输出数据之间用一个空格分隔。
/// </summary>
/// <input>4个字母构成的英文单词</input>
/// <output>共4行，每行输出字母，该字母的ASCII码，该字母后继字符（空格分隔，每行的最后没有空格）</output>
/// <sample>
/// love
/// l 108 m
/// o 111 p
/// v 118 w
/// e 101 f
/// </sample>
/// <sample>
/// zoom
/// z 122 {
///	o 111 p
/// o 111 p
/// m 109 n
/// </sample>
/// <author>Cui Shuning (崔舒宁）</author>
/// <difficulty>01</difficulty>

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char letter01, letter02, letter03, letter04;
	(void)scanf("%c%c%c%c", &letter01, &letter02, &letter03, &letter04);
	printf("%c %d %c\n", letter01, letter01, letter01 + 1);
	printf("%c %d %c\n", letter02, letter02, letter02 + 1);
	printf("%c %d %c\n", letter03, letter03, letter03 + 1);
	printf("%c %d %c\n", letter04, letter04, letter04 + 1);
	return 0;
}
