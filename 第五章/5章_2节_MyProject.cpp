// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

#pragma warning(disable : 4996) //让编译器忽略一些警告信息，从而让我们可以正常使用scanf()等函数

/*
//goto语句不能跨函数演示
void func1()
{
lbl1:
	int k;
	k = 1;
	goto lbl1;
}
void func2()
{
lbl2:
	int a;
	a = 1;
}*/

int main()
{	
	
	{
		int i, sum = 0;
		for (i = 1; i <= 100; i++)   //这里i就是循环变量。
		{
			sum = sum + i;
		}
		printf("sum = %d\n", sum); //sum = 5050
	}

	{
		int i, sum = 0;
		i = 1;   //这里就是给i赋初值
		for (; i <= 100; i++)
		{
			sum = sum + i;
		}
		printf("sum = %d\n", sum); //sum = 5050

	}

	{
		int i, sum = 0;
		for (i = 1; ; i++)
		{
			sum = sum + i;
			if (i >= 100)
				break;
		}
		printf("sum = %d\n", sum);//sum = 5050
	}
	{
		int i, sum;
		for (sum = 0, i = 1; i <= 100; )  //这里用了逗号表达式，大家还记得不?
		{
			sum = sum + i;
			i++;    //保证循环正常结束的办法，这里我们把i++放在循环内嵌语句中，而不放在表
						//达式3位置，结果是一样的
		}
		printf("sum = %d\n", sum);//sum = 5050

	}
	{
		int i, sum;
		sum = 0;
		i = 1;   //i得给初值了
		for (; i <= 100; )
		{
			sum = sum + i;
			i++;
		}
		printf("sum = %d\n", sum);//sum = 5050

	}

	{
		int i, sum;
		sum = 0;
		i = 1;   //i得给初值了
		for (;;)
		{
			sum = sum + i;
			if (i >= 100)
				break;
			i++;
		}
		printf("sum = %d\n", sum);//sum = 5050
	}
	{
		int i, sum;
		i = 1;
		for (sum = 0; i <= 100; i++) {
			sum = sum + i;
		}
		printf("sum = %d\n", sum);//sum = 5050
	}
	{
		int i, j = 10000, sum;
		for (sum = 0, i = 1; i <= 100; i++, j--)
		{
			sum = sum + i;
		}
		printf("sum = %d\n", sum);//sum = 5050
		printf("j = %d\n", j); //j = 9900
	}
	{
		int i, sum;
		sum = 0;
		for (i = 0; 8888; i++)
		{
			sum = sum + i;
			if (i >= 100)
				break;
		}
		printf("sum = %d\n", sum); //sum = 5050

	}
	{
		int i;
		for (i = 0; i <= 100; i++)
		{
			//...一系列要执行的语句
		}
	}
	{
		for (int i = 0; i <= 100; i++)
		{
			//...一系列要执行的语句
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
