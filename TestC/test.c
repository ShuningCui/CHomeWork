#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>

int main()
{
	char str[100], str2[100];
	strcpy(str, "yuu");
	scanf("%[^\n]", str);
	scanf("%[^\n]%*c", str);
	//getchar();
	scanf("%[^\n]%*c", str2);
	printf("%s", str);
	printf("%s", str2);
	return 0;
}