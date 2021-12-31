// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

#pragma warning(disable : 4996) //让编译器忽略一些警告信息，从而让我们可以正常使用scanf()等函数

int main()
{	
	{
		int i, j, k;
		int icount = 0;
		for (i = 1; i <= 9; i++)
		{
			for (j = 1; j <= i; j++)
			{
				k = i * j;
				printf("%d * %d = %d    ", i, j, k);
				icount++;
			}
			printf("\n");
		}
		printf("内循环的循环次数为 %d次\n",icount); //内循环的循环次数为 45次

	}

	{
		int i, sum = 0;
		for (i = 1; i <= 100; i++)
		{
			sum = sum + i;
			if (sum >= 4000)
			{
				break;  //跳出整个for循环，直接跳到for循环体后面的printf语句上去执行
			}
		}
		printf("sum = %d\n", sum); //sum = 4005
		printf("i = %d\n", i); //i = 89
	}

	{
		int i, j, k;
		for (i = 1; i <= 9; i++)
		{
			for (j = 1; j <= i; j++)
			{
				k = i * j;
				printf("%d * %d = %d    ", i, j, k);
				break; //跳出内部这个for j循环
			}
			printf("\n");
			break; //跳出外部这个for i循环
		}
		printf("流程走出来了!\n");

	}
	{
		int i;
		for (i = 1; i <= 100; i++)
		{
			if (i % 3 == 0)
				continue;
			printf("%d    ", i);
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
