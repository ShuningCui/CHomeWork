# 一般性问题注解

# 关于scanf和scanf_s


scanf是C语言的标准输入函数，但有时它并不安全，会出现输入越界的问题。微软推出了一个安全的版本scanf_s来取代scanf。
但scanf_s并不是一个标准的C函数，因此只能在微软的编译器中使用。我们的课本及教学并不依赖微软的编译器，所以教学中不使用scanf_s。
但实际作业平台和考试改卷都是用vs评判，所以scanf_s可以在作业和考试中使用。
如果要在vs中继续使用scanf，可以在第一行（必须在所有include语句之前）添加
#define _CRT_SECURE_NO_WARNINGS
scanf_s和scanf的许多用法不一样！！不能简单的将scanf直接改为scanf_s使用！！

如代码：
char ch[20];
scanf(“%s”,ch);
需要改为：
scanf_s(“%s”,ch,20);
虽然
scanf_s(“%s”,ch);
不报错，但是却得不到应用的结果！（应为如果不写最后那个20，默认值是1）

如果坚持要使用scanf_s，请先仔细阅读以下文档学习：

https://docs.microsoft.com/zh-cn/cpp/c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l?f1url=%3FappId%3DDev16IDEF1%26l%3DZH-CN%26k%3Dk(QUESTIONC053%252Fscanf_s);k(scanf_s);k(SolutionItemsProject);k(DevLang-C%252B%252B);k(TargetOS-Windows)%26rd%3Dtrue&view=msvc-160

# 关于long int，long long int

在Visual studio中，long int和int是一样的。需要更大范围的整数，
应该使用 long long int。
对应的输入格式是
%lld
此外， long long int后面的int可以省略。同样，short int、unsigned int
后面的int也可以省略。
