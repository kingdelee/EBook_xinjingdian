// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

int main(int argc, char* argv[])
//int main() //主函数
{	
	{
		const char* pName[] = { "C++","JAVA","PYTHON","GO","CSharp" }; //指针数组，共5个元素
		int is1 = sizeof(pName); //计算所有这个指针数组占多少个字节，20字节，因为每个指针占4个字节
		int isize = sizeof(pName) / sizeof(pName[0]); //5表示有5个数组元素，本行课计算数组元素数量

		const char* p2 = "JAVA";   //把字符串首地址赋给指针

		int i;
		for (i = 0; i < isize; i++)
		{
			printf("pName[%d] = %s\n", i, pName[i]);
		}
		printf("---------------------\n");

		const char* ptmp;
		ptmp = pName[0];     //ptmp指向了C++
		pName[0] = pName[1]; //pName[0]指向了JAVA
		pName[1] = ptmp;     //pName[1]指向了C++
		for (i = 0; i < isize; i++)
		{
			printf("pName[%d] = %s\n", i, pName[i]);
		}


		printf("---------------------\n");
		const char** pp; //定义一个指向指针的指针
		pp = &pName[0];  //那么*pp就是pp所指向的另一个指针变量
		printf("pp = %s\n", *pp); //pp = JAVA， 打印 *p等价于打印pName[0];

		printf("---------------------\n");
		int abc = 5;
		int* pabc = &abc;
		int** ppabc = &pabc;
		printf("abc = %d\n", abc);     //abc = 5
		printf("abc = %d\n", *pabc);   //abc = 5
		printf("abc = %d\n", **ppabc); //abc = 5,注意*右结合性   
	}

	{
		int i;
		printf("argc = %d\n", argc);
		for (i = 0; i < argc; i++)
		{
			//printf("argv[%d] = %s\n", i, argv[i]);
			printf("argv[%d] = %s\n", i, *argv);
			argv++;

		}
	}
	
	{
		char* p;
		p = NULL;
	}
	{		
		int a = 3;
		int* p = &a;
		float bf = 5.6f;
		float* pf = &bf;
		//p = pf; //报错，不可以
		p = (int *)pf; //强制类型转换虽然可以，但如果某些时候，p和pf所指向的数据类型和所
						//占用的内存字节数不同，那么你操作p就非常危险。

		void* pwn = NULL;  //pwn可以指向任何类型的变量
		pwn = p;  //都不报错
		pwn = pf; //都不报错
		//将来你想使用pf的时候，你可以通过pwn转换回去
		pf = (float*)pwn;

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
