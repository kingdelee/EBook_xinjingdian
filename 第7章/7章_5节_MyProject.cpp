// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

#pragma warning(disable : 4996) //让编译器忽略一些警告信息，从而让我们可以正常使用scanf()等函数


//函数声明开始------------------------------------------------------------------
void func1(int tmpvalue);//函数声明

//函数声明结束------------------------------------------------------------------

int p = 1, q = 5; //全局变量(外部变量)

//函数定义
int f1(int a)
{
	int b, c;
	//....
	return 0;
}
char c1, c2;  //全局变量(外部变量)
char f2(int x, int y) //函数定义
{
	int i, j;

	return 0;
}

int a = 4, b = 5;  //全局变量定义
void lookvalue(int a, int b)
{
	a = 123;
	b = 456;  //局部变量b作用范围内，全局变量b不起作用
}

int main()
{
	{
		int a, b;
		//....
		//....
		//复合语句		
		{
			int c;
			a = 0;
			b = 0;
			c = a + b;
			//....
			//....
		}
		//....
		//....
		//....
	}

	{
		int m, n;
	}

	{
		int i = 2, j = 5;
		lookvalue(i, j);

		printf("a = %d\n", a); //a = 4
		printf("b = %d\n", b); //b = 5

	}

	return 0;
}

//函数定义开始------------------------------------------------------------------
void func1(int tmpvalue)
{
	//这里无法使用main中定义的m,n,k;
	int x, y;
	//这里能使用的是tmpvalue,x,y
}

//函数定义结束------------------------------------------------------------------


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
