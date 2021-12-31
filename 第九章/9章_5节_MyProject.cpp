// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

int max(int x, int y)  //求最大值函数
{
	if (x > y)
		return x;
	return y;
}

int wwmax(int x, int y, int (*midfunc)(int, int)) //指向函数的指针变量做函数形参
{
	int result = midfunc(x, y);
	return result;
}

int* add(int x, int y)
{
	int sum = x + y;
	return &sum;    //隐藏致命问题，函数调用完毕后，这个内存地址 会被系统回收；
}


int main() //主函数
{	
	{
		int c;
		c = max(5, 19);
		printf("c=%d\n", c); //c=19

	}
	{
		int c;
		//c = max(5,19);
		int (*p)(int x, int y); //定义一个函数指针变量，定义参数，定义返回值，
								//*p被()包裹，()不可省略，表示*和p先结合代表一个指针变量
								//然后再和后边的()结合表示此指针变量指向函数；
								//写成int (*p)(int ,int);只有类型说明符，也可以
		p = max;  //将函数max的入口地址赋给指针变量p，函数名代表该函数的入口地址
						//类似的：数组名代表数组起始地址
						//现在p就是指向函数max的指针变量，p和max都指向函数的开头						
							//写成p =&max;也可以

		c = (*p)(5, 19); //调用 *p就是调用函数max，p指向函数入口，等价于c=max(5,19);                
						 //这里调用只是用*p取代了函数名
						 //p不能指向函数中间某条语句，所以 *(p+1)不合法；
						 //其实这个*也可以省略
		printf("c=%d\n", c); //c=19

		printf("max=0x%x\n", max);  //%x格式符代表以 无符号十六进制整数输出
		printf("p=0x%x\n", p);
	}
	{
		int c;

		c = wwmax(5, 19, max); //加断点跟踪，直接把函数名传进去
		printf("c=%d\n", c);//c=19
		int (*p)(int, int); //定义函数指针 变量
		p = max;
		c = wwmax(45, 21, p); //加断点跟踪
		printf("c=%d\n", c);//c=45
	}
	{
		int* presult;
		presult = add(4, 5); //执行后presult指向的内容有已经不归你所有，
						//你不应该从中取得值或者给它赋值
		printf("result = %d\n", *presult); //这种代码不稳定，虽然可能返回正确结果，但绝对是隐患
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
