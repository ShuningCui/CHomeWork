/// <summary>
/// 将x反转，如123反转位321
/// </summary>
/// <param name="x">带反转的数</param>
/// <returns>发转后的结果</returns>
int resverse(int x)
{
	int resx = 0;
	while (x)
	{
		resx = resx * 10 + x % 10;
		x /= 10;
	}
	return resx;
}

/// <summary>
/// 判断一个数是否是素数
/// </summary>
/// <param name="x">判断x是否是素数</param>
/// <returns>是则返回1，否则返回0</returns>
int IsPrime(int x)
{
	for (int i = 2; i <= x / i; i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
/// <summary>
/// 冒泡排序
/// </summary>
/// <param name="a">带排序的数组</param>
/// <param name="n">排序的个数</param>
void Bubble(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				int t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
	}
}
/// <summary>
/// 删除字符串中指定的字符
/// </summary>
/// <param name="str">输入的字符串</param>
/// <param name="ch">删除的字符</param>
/// <returns>删除后的字符串</returns>

char* DelChar(char* str, char ch)
{

	int i = 0;
	while (str[i])
	{
		if (str[i] == ch)
		{
			int j = 0;
			while (str[i + j + 1])
			{
				str[i + j] = str[i + j + 1];
				j++;
			}
			str[i + j] = 0;
		}
		else
		{
			i++;
		}
	}
	return str;
}



/// <summary>
/// 查找一个字符是否在一个串中
/// </summary>
/// <param name="str">查找的字符串</param>
/// <param name="ch">查找的字符</param>
/// <returns>如找到返回下标（从0开始，返回第一个找到的下标）没有，返回-1</returns>
int Search(char* str, char ch)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == ch)
		{
			return i;
		}
		i++;
	}
	return -1;
}

///<summary>
/// 对字母x，用字母表中其后的第n个字母代替，
/// 不够n个时再从字母a循环计数
/// </summary>
/// <param name="x">替换的字母</param>
/// <param name="n">替换值</param>
/// <returns>替换后的字母,如果x不是字母，则返回x</returns>
char ReplaceChar(char x, int n)
{
	if ('A' <= x && x <= 'Z')
	{
		x = (x - 'A' + n) % 26 + 'A';
	}
	if ('a' <= x && x <= 'z')
	{
		x = (x - 'a' + n) % 26 + 'a';
	}
	return x;
}

/// <summary>
/// 判断是否为闰年
/// </summary>
/// <param name="year">年份</param>
/// <returns>是，返回1，否，0</returns>
int IsLeapyear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

/// <summary>
/// 判断整数x的各个位是否有相同的
/// </summary>
/// <param name="x">整数x</param>
/// <returns>没有相同的位返回1，否则返回0</returns>
int IsDifferent(int x)
{
	int num = 0;
	int a[100];
	while (x)
	{
		a[num++] = x % 10;
		x /= 10;
	}

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			if (a[i] == a[j])
			{
				return 0;
			}

		}
	}
	return 1;
}

/// <summary>
/// 将字符串开头处指定的字符删除
/// for example, "sss123ss" after removed 's' is "123ss"
/// </summary>
/// <param name="str">the original character string</param>
/// <param name="ch">the character will be removed</param>
/// <returns>the pointer of string after removed</returns>
char* RemoveCharAtBegin(char* str, char ch)
{
	int i = 0;
	//find the first character that do not equal ch
	while (str[i] == ch && str[i] != 0)
	{
		i++;
	}
	int j = 0;
	//remove the character
	while ((str[j++] = str[i++]) != 0);
	/*while(str[i]!=0)
	{
		str[j++] = str[i++];
	}*/
	return str;
}

/// <summary>
/// 将字符串结尾处指定的字符删除
/// for example, "sss123ss" after removed 's' is "sss123"
/// </summary>
/// <param name="str">the original character string</param>
/// <param name="ch">the character will be removed</param>
/// <returns>the pointer of string after removed</returns>
char* RemoveCharAtEnd(char* str, char ch)
{
	int i = strlen(str);
	i--;
	//find the last character equal ch form the end of string
	while (str[i] == ch && i >= 0)
	{
		i--;
	}
	//put the zero end of string
	str[++i] = 0;
	return str;
}

/// <summary>
/// 判断一个数n是否是回文数
/// </summary>
/// <param name="n">输入的n</param>
/// <returns>是则返回1，否返回0</returns>
int IsPalindrome(int n)
{
	int resN = 0;
	int m = n;
	while (n)
	{
		resN = resN * 10 + n % 10;
		n /= 10;
	}
	return m == resN;
}

/// <summary>
/// 反转字符串，strrev在c99标准中不是标准库函数，一些编译器并没提供
///如果编译器提供了该函数，尽量使用编译器提供的版本
/// </summary>
/// <param name="str">待反转的字符串</param>
/// <returns>反转后的字符串</returns>
char* strrev(char* str)
{
	int j = strlen(str);   //the length of string
	for (int i = 0; i < j / 2; i++)  //swap head and tail
	{
		char t = str[i];
		str[i] = str[j - i - 1];
		str[j - i - 1] = t;
	}
	return str;
}

/// <summary>
/// 将字符串中的某一个字符替换为另一个字符
/// </summary>
/// <param name="str">替换的字符串</param>
/// <param name="ch">被替换的字符</param>
/// <param name="repCh">替换后的字符</param>
/// <returns>替换的字符个数</returns>
int ReplaceChar(char* str, char ch, char repCh)
{
	int i = 0;
	int sum = 0;
	while (str[i])
	{
		if (str[i] == ch)
		{
			str[i] = repCh;
			sum++;
		}
		i++;
	}
	return sum;
}


/// <summary>
/// 将整数按指定的进制（2<=radix<=16) 分解为字符串
/// </summary>
/// <param name="num">num, the decomposed character string，分解后存放结果的字符串</param>
/// <param name="n">n, the integer will be decomposed，带分解的整数</param>
/// <param name="radix">radix, the specified base，指定的进制</param>
/// <returns>the pointer of the decomposed character string,
///that is the pointer of num，指向分解后的字符串的指针，也就是指向num的指针</returns>
char* IntToString(char* num, int n, int radix)
{
	int i = 0;
	while (n)
	{
		int m = n % radix;
		if (0 <= m && m <= 9)  //convert it to ASCII code
		{
			num[i++] = m + '0';
		}
		else   //convert it to 'A'-'F' over 10
		{
			num[i++] = m - 10 + 'A';
		}
		n = n / radix; //the next number
	}
	num[i] = 0;
	strrev(num);  //reverse the string
	return num;
}


/// <summary>
/// 将一个字符串按指定字符分隔为若干字符串存储到二维数组中
/// Separate a string into several strings according
/// to the specified charactersand
/// store them in a two - dimensional array
/// </summary>
/// <param name="split">the 2-D array stored the substrings
/// 存放分解结果的2维数组</param>
/// <param name="str">the original character string，原始字符串</param>
/// <param name="x">the separated character，分隔字符</param>
/// <returns>the number of separator strings，分隔后的字符串数目</returns>、

int SplitString(char split[][100], char* str, char x)
{
	RomoveCharAtEnd(str, x);
	RomoveCharAtBegin(str, x);
	int sum = 0;
	int i = 0;
	int j = 0;
	while (str[i])
	{
		if (str[i] == x)  //meet the separated character
		{
			split[sum][j] = 0;  //the end of this line
			sum++;
			j = 0;
			while (str[i++] == x);  //skip consecutive separators
			i--;
		}
		else
		{
			split[sum][j++] = str[i++];  //copy to the 2-D array
		}
	}
	split[sum][j] = 0;
	return ++sum;
}