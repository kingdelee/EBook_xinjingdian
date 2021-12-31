// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

#include "head.h"

#define DEBUG 1 //后边这个1其实都可以省略，不想输出调试信息可以把这行注释掉

#define MYPI 1

int main() //主函数
{
	{
		float ftmp;
		ftmp = PI * 2;
		printf("ftmp = %f\n", ftmp); //ftmp = 6.283185
	}

	{
#ifdef DEBUG
		printf("打印一些变量信息作为调试信息\n");
#endif

	}

	{
#if MYPI
		printf("MYPI is defined\n");
#else 
		printf("MYPI is not defined\n");
#endif

	}

	{
#if _WIN32	//windows平台：注意这个宏系统会定义，不需要我们自己定义
		//这里有一些windows专用函数
		//WaitForSingleObject()
		printf("当前是windows平台\n"); //在VS中本行会打印输出

#elif __linux__  //linux平台：注意这个宏系统会定义，不需要我们自己定义
		//这里有 一些linux专用函数
		//epoll_create()
		printf("当前是linux平台\n");
#else
		//….其他平台(非windows，非linux
#endif


	}
	return 0;
}


/*
#undef PI
void func1()
{
	float ftmp;
	ftmp = PI * 2;  //这行会报错，因为PI已经被#undef终止掉了
}
*/



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
