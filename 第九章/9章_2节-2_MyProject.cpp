// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

 //该函数用于交换两个变量的值
void swap(int* pdest1, int* pdest2)
{
	/*
	//以下是纯指针操作相关的代码 ，但达不到本函数的目的
	int* ptemp;
	ptemp = pdest1;
	pdest1 = pdest2;
	pdest2 = ptemp;
	*/

	int temp;

	//如下这几行是常规变量之间的赋值，不是指针变量之间的赋值，看清楚
	temp = *pdest1;  //*pdest1(pdest1所指向的变量)实际就是变量a
	*pdest1 = *pdest2; //*pdest2实际上就是变量b
	*pdest2 = temp;
}

int main() //主函数
{	
	{
		int a = 5, b = 6;
		int* p1, * p2;

		p1 = &a; //p1指向a
		p2 = &b; //p2指向b
		printf("a=%d,b=%d\n", a, b); //a=5,b=6
		if (a < b) //成立
		{
			swap(p1, p2); //交换变量a和变量b的值
		}
		printf("a=%d,b=%d\n", a, b); //a=6,b=5

	}
	{
		//如下代码异常
		//int* p;
		//*p = 5;

		int a;
		int* p;
		p = &a; //现在p确定指向a了，
		*p = 5; //相当于把a的值给5了。
		printf("断点掐在这里\n");
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
