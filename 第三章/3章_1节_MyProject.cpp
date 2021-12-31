// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注
#include <iostream>

int main()
{	
	{
		; //空语句
	}
	{
		int x; x = 12; printf("x=%d\n", 12);
	}
	{
		printf("断点停止在\
这里\n");
	}
	{
		printf("1\n");
		printf("2\n"); printf("3\n");
	}
	
	{
		//选择结构
		if (3 > 1)
		{
			printf("3 > 1\n"); //这行被执行
		}
		else
		{
			printf("3 <= 1\n");
		}
	}
	{
		int k = 5;
		switch (k)
		{
		case 1:
		{
			printf("icount = 1\n");
		}
		break;
		case 2:
		{
			printf("icount = 2\n");
		}
		break;
		case 5:
		{
			printf("icount = 5\n"); //这行会被执行
		}
		break;
		}

	}
	{
		int icount = 5;
		while (icount >= 0)
		{
			printf("icount = %d\n", icount); //5,4,3,2,1,0
			icount -= 1;  //icount = icount – 1
		}
	}

	{
		int icount = 5;
		do
		{
			printf("icount = %d\n", icount); //icount = 5,4,3,2,1,0
			icount -= 1;
		} while (icount >= 0);

	}

	{
		int x;
		printf("x = 8的值是%d\n", x = 8); //x = 8的值是8
		printf("x = %d\n", x); //x = 8
	}
	{
		int a = 3, b = 5, t=1;
		if ((a = b) > 0) t = a;
		printf("a = %d\n", a); //a = 5
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
