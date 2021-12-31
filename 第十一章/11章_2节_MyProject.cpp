// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>


#define BIT(x) (1 << (x))    //这段代码大家日后日常工作中都能用到
							 //#define我们讲过，这个是带参数的宏定义 

//10个任务：
enum EnumTask
{
	ETask1 = BIT(0),        //1 = 1
	ETask2 = BIT(1),        //2 = 10
	ETask3 = BIT(2),        //4 = 100
	ETask4 = BIT(3),        //8 = 1000
	ETask5 = BIT(4),        //16 = 10000
	ETask6 = BIT(5),        //32 = 100000
	ETask7 = BIT(6),        //64 = 1000000
	ETask8 = BIT(7),        //128 = 10000000
	ETask9 = BIT(8),        //256 = 100000000
	ETask10 = BIT(9),        //512 = 1000000000
};


int main() 
{	
	{
		unsigned int tempvalue = 38 & 22; 
		printf("tempvalue = %u\n", tempvalue); //tempvalue = 6
	}
	{
		unsigned int tempvalue = 38 | 22;
		printf("tempvalue = %u\n", tempvalue); //tempvalue = 54
	}

	{
		unsigned int tempvalue = 38 ^ 22; 
		printf("tempvalue = %u\n", tempvalue); //tempvalue = 48
	}

	{
		unsigned  int tempvalue = ~38; 
		printf("tempvalue = %u\n", tempvalue); //tempvalue = 4294967257
	}

	{
		unsigned  int tempvalue = 15 << 1;  
		printf("tempvalue = %u\n", tempvalue);//tempvalue = 30
		tempvalue = 15 << 2; 
		printf("tempvalue = %u\n", tempvalue);//tempvalue = 60
	}
	{
		unsigned  int tempvalue = 15 >> 1;  
		printf("tempvalue = %u\n", tempvalue);//tempvalue = 7
		tempvalue = 15 >> 2; 
		printf("tempvalue = %u\n", tempvalue);//tempvalue = 3
	}
	{
		int a = 35;
		int b = 22;
		a &= b;  //a = a & b
		printf("a = %u\n", a);//a = 2
	}

	{
		int i;
		for (i = 0; i < 10; i++)
		{
			printf("BIT(%d) = %d\n", i, BIT(i));
		}
	}
	{
		unsigned int task = 0; //刚开始所有任务都没执行过
		//判断第7个任务是否执行过了
		if (task & ETask7) //按位与，不为0则表示任务7做过
		{
			//任务7已经做过
			printf("任务7已经做过了\n");
		}
		else
		{
			//任务7还没做过
			printf("任务7还没做过，现在做任务7\n");
		}
	}
	{
		unsigned int task = 0; //刚开始所有任务都没执行过
		//判断第7个任务是否执行过了
		if (task & ETask7) //按位与，不为0则表示任务7做过
		{
			//任务7已经做过
			printf("任务7已经做过了\n");
		}
		else
		{
			//任务7还没做过
			printf("任务7还没做过，现在做任务7\n");

			//把任务7做了；
			task = task | ETask7; //位操作运算符优先级高；
		}

		//再次判断任务7是否做过了
		if (task & ETask7)
		{
			printf("任务7已经做过了，可以把这个task变量值保存到数据库中去了\n");
		}

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
