// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

#pragma warning(disable : 4996) //让编译器忽略一些警告信息，从而让我们可以正常使用scanf()等函数

/*
//goto语句不能跨函数演示
void func1()
{
lbl1:
	int k;
	k = 1;
	goto lbl1;
}
void func2()
{
lbl2:
	int a;
	a = 1;
}*/

int main()
{	
	{
		int i = 1, sum = 0;
	loop:
		if (i <= 100)
		{
			sum = sum + i;
			i++;
			goto loop;
		}
		printf("1+2+...+100的和值为:%d\n", sum); //1 + 2 + ... + 100的和值为:5050
	}
	{
		int i = 1, sum = 0;
		while (i <= 100)
		{
			sum = sum + i;
			i++;
		}
		printf("1+2+...+100的和值为:%d\n", sum); //1 + 2 + ... + 100的和值为:5050
	}
	{
		int i = 1, sum = 0;
		do 
		{
			sum = sum + i;
			i++;
		} 
		while (i <= 100);
		printf("1+2+...+100的和值为:%d\n", sum); //1 + 2 + ... + 100的和值为:5050
	}
	{
		int sum = 0, i = 1;
		while (i <= 10)
		{
			sum = sum + i;
			i++;
		}
		printf("sum = %d\n", sum); //sum = 55
	}
	{
		int sum = 0, i = 1;
		do
		{
			sum = sum + i;
			i++;
		} while (i <= 10);
		printf("sum = %d\n", sum);

	}

	{
		int sum = 0, i = 20;
		while (i <= 10)
		{
			sum = sum + i;
			i++;
		}
		printf("sum = %d\n", sum); //sum = 0
	}
	{
		int sum = 0, i = 20;
		do
		{
			sum = sum + i;
			i++;
		} while (i <= 10);
		printf("sum = %d\n", sum); //sum = 20
	}

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
