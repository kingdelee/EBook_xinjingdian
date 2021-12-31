// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

#pragma warning(disable : 4996) //让编译器忽略一些警告信息，从而让我们可以正常使用scanf()等函数


#define PI 3.1415926
#define DPI  2 * PI
#define DPICPI  PI * DPI
//#define S(r) PI*r*r
#define S(r) PI*(r)*(r)

#define MAX(x,y)  (x) > (y)?(x):(y)

#define   MACROTEST   do   {   \
	printf("test\n"); \
}   while(0);



int main()
{
	{
		float ftmp;
		ftmp = 2 * PI;
		printf("ftmp = %f\n", ftmp); //ftmp = 6.283185			
	}
	{
		float ftmp;
		ftmp = PI * 2;
		ftmp = DPI;
		ftmp = DPICPI;
		printf("断点掐到这里方便观察\n");
	}
	{
		char stmp[100] = "DPICPI";  //这里的DPICPI不能被替换
		printf("stmp=%s\n",stmp);   //stmp=DPICPI
	}
	{
		float area;
		area = S(3.6); //等价于3.1415926*3.6*3.6
		printf("断点掐到这里方便观察\n");
	}
	{
		float area;
		area = S(1+5);
		printf("断点掐到这里方便观察\n");
	}
	{
		int result = MAX(3, 4);
		printf("result=%d\n", result);   //result=4
	}
	{
		MACROTEST
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
