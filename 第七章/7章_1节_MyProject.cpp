// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

#pragma warning(disable : 4996) //让编译器忽略一些警告信息，从而让我们可以正常使用scanf()等函数

void printhello()
{
	printf("hello,how are you!\n");
}

int addtwoshu(int a, int b)
{
	int sum = a + b;
	return sum;  //return后边跟一个变量(sum)，代表本函数要返回一个值(变量sum的值)
}

int whichmax(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

int testf()
{
	return 3.45F;  //返回实际是3。这么坑自己不好，这么写多不清晰啊！
}

int main()
{
	{
		printhello();
		printhello();
		printhello();
		printf("断点停在这\n");
	}
	{
		int result = addtwoshu(3, 4);
		printf("result = %d\n",result); //7
	}
	return 0;
}

void printfhello()  //函数如果没有返回值，必须写成返回类型为void，没商量，必须记住
{
	printf("hello world");
	return;   //可以没有，因为无返回值
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
