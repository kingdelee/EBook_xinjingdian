// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

#pragma warning(disable : 4996) //让编译器忽略一些警告信息，从而让我们可以正常使用scanf()等函数

//void diguifunc()
//{
//	printf("diguifunc()函数执行\n");
//	diguifunc();
//}

//函数声明开始------------------------------------------------------------------
void qtfunc1();
void qtfunc2();
void qtfunc3();

//函数声明结束------------------------------------------------------------------

int dg_jiecheng(int n)
{
	int result; //保存阶乘结果
	if (n == 1)
	{
		result = 1;  //这里就是该递归调用函数的出口。
	}
	else
	{
		result = dg_jiecheng(n - 1) * n;  //递推关系，这个数与上一个数之间的关系。
	}
	return result;
}


int main()
{
	{
		//diguifunc();
	}

	{
		//计算5的阶乘
		printf("5的阶乘结果是%d",dg_jiecheng(5)); //5的阶乘结果是120
	}
	return 0;
}

//函数定义开始------------------------------------------------------------------
void qtfunc1()
{
	int tempvar1 = 150;    //这里要分配内存
	printf("qtfunc1开始执行()------------\n");
	qtfunc2();
	printf("qtfunc1结束执行()------------\n");
}
void qtfunc2()
{	
	printf("qtfunc2开始执行()------------\n");
	qtfunc3();
	printf("qtfunc2结束执行()------------\n");
}
void qtfunc3()
{
	printf("qtfunc3开始执行()------------\n");	
	printf("qtfunc3结束执行()------------\n");
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
