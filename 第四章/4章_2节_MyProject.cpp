// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

#pragma warning(disable : 4996) //让编译器忽略一些警告信息，从而让我们可以正常使用scanf()等函数

int main()
{	
	{
		int x = 8;
		if (x > 5)
			printf("x值 > 5\n"); //条件成立，显示“x值 > 5”
	}
	{
		int x = 8;
		if (x > 5) //条件成立
		{
			printf("x值 > 5\n"); //x值 > 5
			printf("x该值确实 > 5哦\n"); //x该值确实 > 5哦
		}
	}
	{
		int x = 8;
		if (x > 5)
			printf("x值 > 5\n"); //x值 > 5
		printf("x该值确实 > 5哦\n"); //x该值确实 > 5哦
	}
	{
		int x = 5, y = 2;
		if (x > y)
			printf("x > y是OK的\n"); //这行被执行
		else
			printf("x > y不OK\n"); //这行不被执行

	}
	{
		int x = 5, y = 2;
		if (x > y)
		{
			printf("x > y是OK的1\n");
			printf("x > y是OK的2\n");
		}
		else
		{
			printf("x > y不OK1\n");
			printf("x > y不OK2\n");
		}
	}
	{
		int x = 5, y = 2;
		if (x > y)
			printf("x > y是OK的1\n");
		//printf("x > y是OK的2");
		else
		{
			printf("x > y不OK1\n");
			printf("x > y不OK2\n");
		}
	}
	{
		int number = 380;
		int cost = 0;
		if (number > 500)
			cost = 1;
		else if (number > 300)//本条件成立
			cost = 2;  //这行会执行
		else if (number > 100)
			cost = 3;
		else
			cost = 4;

	}

	{
		if (15)  //条件会成立
			printf("成立哦\n"); //本条语句会执行
	}
	{
		if ('a') //条件会成立
			printf("条件为真哦\n"); //本条语句会执行

	}

	{
		if (1)
			if (1) printf("1\n");
			else
				if (1) printf("1\n");
				else printf("1\n");

	}
	{
		int x = 5;
		if (x > 1)
			if (x > 8)
				printf("x>2\n");
			else
				if (x > 3)
					printf("x>3\n");
				else
					printf("x为其他值\n");

	}

	{
		int x = 5;
		if (x > 3)
		{
			if (x > 4) printf("x > 4\n"); //这个printf语句会被执行
		}
		else
		{
			printf("执行else\n");
		}
	}

	{
		int x = 1;
		int y = -1;
		if (x != 0)
		{
			//缩进
			printf("为了更清晰，1行语句也可以用{}括住\n"); //这行会执行
		}
		else
		{
			if (y == -1)
			{
				printf("y == -1\n");
			}
			else
			{
				printf("y != -1\n");
			}
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
