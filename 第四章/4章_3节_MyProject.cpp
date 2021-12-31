// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

#pragma warning(disable : 4996) //让编译器忽略一些警告信息，从而让我们可以正常使用scanf()等函数

int main()
{	
	{
		int a = 4, b = 5, max;
		if (a > b) 
			max = a;
		else 
			max = b;

	}
	{
		int a = 4, b = 5, max;
		max = (a > b) ? a : b;
	}

	{
		int abc = 3;
		switch (abc)
		{
		case 1:
			printf("值为1\n");
			break;
		case 2:
			printf("值为2\n");
			break;
		case 3:
			printf("值为3\n"); //这行会被执行
			break;
		default:
			break;
		}
	}
	{
		int tees = 1;
		switch (tees)
		{
		case 1:
			printf("值为1\n");
			//漏掉break的后果
		case 2:
			printf("值为2\n");
			break;
		case 3:
			printf("值为3\n");
			break;
		default:
			break;
		}
	}
	{
		int tees = 5;
		switch (tees)
		{
		case 1:
			printf("值为1\n");
			break;
		case 2:
			printf("值为2\n");
			break;
		case 3:
			printf("值为3\n");
			break;		
		}
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
