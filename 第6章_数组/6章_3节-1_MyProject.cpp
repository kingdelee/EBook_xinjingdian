// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

#pragma warning(disable : 4996) //让编译器忽略一些警告信息，从而让我们可以正常使用scanf()等函数

int main()
{	
	{
		char c[10];  //能用的元素范围是c[0]~c[9]
		c[0] = 'I';
		c[1] = ' ';
		c[2] = 'a';
		c[3] = 'm';
		c[4] = ' ';
		c[5] = 'h';
		c[6] = 'a';
		c[7] = 'p';
		c[8] = 'p';
		c[9] = 'y';
	}
	{
		char c[10] = { 'I',' ','a','m',' ','h','a','p','p','y' };
	}
	{
		char c[] = { 'I',' ','a','m',' ','h','a','p','p','y' };
	}
	{
		//语法错误
		//char c[8] = { 'I',' ','a','m',' ','h','a','p','p','y' };
	}
	{
		char c[12] = { 'I',' ','a','m',' ','h','a','p','p','y' };
		printf("这里掐断点看下\n");
	}
	{
		char diamond[3][3] = { {' ','*',' '},{'*',' ','*'},{' ','*',' '} };
		int i, j;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%c", diamond[i][j]);
			}
			printf("\n");
		}
	}
	{
		char c[10] = { 'I',' ','a','m',' ','h','a','p','p','y' };
		int i;
		for (i = 0; i < 10; i++)
		{
			printf("%c", c[i]);
		}
		printf("\n");
	}
	{
		char c[] = { "I am happy" }; //这里可以省略{}
		printf("断点下到这里方便跟踪调试\n");
	}
	{
		const char *p = "I am happy";
		printf("断点下到这里方便跟踪调试\n");
	}
	{
		char c[11] = "I am happy";
	}
	{
		char c[] = { 'I',' ','a','m',' ','h','a','p','p','y' };  //我们通过掐断点调试发现这里是c[10];
		printf("%s\n", c);
		printf("断点下到这里方便跟踪调试\n");
	}
	{
		char c[] = "I am happy"; //通过掐断点调试发现数组c大小是11，这第11个也就是c[10]，被系统设置为了‘\0’
		printf("%s\n", c);
		printf("断点下到这里方便跟踪调试\n");

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
