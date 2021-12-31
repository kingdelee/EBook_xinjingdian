// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

//void copystr(char from[], char to[])
/*void copystr(char* from, char* to)
{
	int i = 0;
	while (from[i] != '\0')
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
}
void copystr(char* from, char* to)
{
	for (; *from != '\0'; from++, to++)
	{
		*to = *from;  //相当于b[i] = a[i];
	}
	*to = '\0';
}*/
void copystr(char* from, char* to)
{
	while (*from) //不遇到\0(ascii码为0)就继续
	{
		*to++ = *from++;  //同级，从右到左结合，先用后加。
	}
	*to = '\0';
}


int main() //主函数
{	
	{
		char mystr[] = "I love China!"; //这里没规定字符数组长度，系统会自动计算。算\0长度共14；
		printf("%s\n", mystr); //I love China!

		char mystr1[] = "I love China!"; //这里没规定字符数组长度，系统会自动计算。算\0长度共14；
		char mystr2[] = "I love China!";
		printf("%s\n", mystr1); //I love China!
		printf("%s\n", mystr2); //I love China!

	}

	{
		const char* pmystr1 = "I Love China!";
		const char* pmystr2 = "I Love China!";
		printf("%s\n", pmystr1); //I Love China!
		printf("%s\n", pmystr2); //I Love China!
		//pmystr2[3] = 'c'; //系统会报错；
	}

	{
		char a[] = "I love China!";
		char b[100]; //保证比a长
		int i;
		for (i = 0; *(a + i) != '\0'; i++)  //*(a+i) 相当于a[i]
		{
			*(b + i) = *(a + i);      //*(b+i) 相当于b[i]
		}
		*(b + i) = '\0'; //此时i=13
		printf("string a is %s\n", a);
		printf("string b is %s\n", b);

		//b还可以逐个字符输出
		for (i = 0; b[i] != '\0'; i++)
		{
			printf("%c", b[i]);
		}
		printf("\n");
	}
	{
		char a[] = "I love China!";
		char b[100]; //保证比a长
		char* p1, * p2; //字符型指针变量
		int i;

		p1 = a;
		p2 = b;

		for (; *p1 != '\0'; p1++, p2++)  //字节1，因为是char型，所以一次跳1个字节；
		{
			*p2 = *p1;  //第一次循环相当于 b[0] = a[0];
		}
		*p2 = '\0';
		printf("string a is %s\n", a);
		printf("string b is %s\n", b);
	}

	{		
		char a[] = "this is source content";
		char b[] = "this is a special test hehe,look carefully"; //必须保证b比a大，因为后续a内容往b里拷贝，否则崩溃；

		printf("a=%s\n", a);
		printf("b=%s\n", b);

		copystr(a, b);
		printf("a=%s\n", a);
		printf("b=%s\n", b);
	}
	{
		char str[100] = "I Love China!";
	}

	{
		const char* a;
		a = "I Love China";

	}
	{
		const char* a = "I love China!";
		a = a + 7;
		printf("%s", a); //China!
	}

	{
		char a[] = "I love China!";
		//a = a + 7;  //这不可以
		printf("%s", a);

	}
	return 0;
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
