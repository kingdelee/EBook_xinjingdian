// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

#pragma warning(disable : 4996)


union myuni
{
	int  carnum;//轿车的编号 , 4个字节
	char cartype;//轿车的类型，比如 微型车、小型车、中型车、中大型车、豪华车，1个字节够了
	char cname[60]; //轿车名，60字节
}a, b, c;

struct student
{
	int num;
	char name[52];
};

enum color
{
	Red,
	Green,
	Blue,
	Yellow
};

int main() 
{	
	{
		union myuni a, b, c;
	}
	{
		int ilenstudent = sizeof(struct student);
		printf("ilenstudent = %d\n", ilenstudent); //56
	}
	{
		int ilenunion = sizeof(union myuni);
		printf("ilenunion = %d\n", ilenunion); //60
	}
	
	{
		a.cname;		a.carnum;
	}
	{
		union myuni a, b, c;
		a.carnum = 1289234898;
		strcpy(a.cname, "ab");   //a.cname起作用了，而a.carnum的值已经没意义了；
	}
	{
		//union myuni a = { 12,'A',"小汽车" };  //这个报错
		union myuni b = {12};  //定义时初始化第一个成员倒是可以的
	}
	{
		enum color mycolor1, mycolor2; //定义了两个枚举类型的变量
		mycolor1 = Red;

	}
	{
		enum { Red, Green, Blue, Yellow } mycolor1, mycolor2;
	}
	{
		int ilen = sizeof(color); //4 ，用枚举类型名，得到值为4
		 ilen = sizeof(Red); //4，用枚举类型中的枚举常量，得到值也为4
		printf("ilen = %d\n", ilen); //4，这个枚举型常量可以理解成整型量，占4个字节

		printf("Red = %d\n", Red);  //0
		printf("Yellow = %d\n", Yellow); //3
	}
	{
		enum color
		{
			Red = 7,
			Green,  //8，此值是前一个枚举常量值+1
			Blue = 2,
			Yellow //3，此值是前一个枚举常量值+1
		};
		printf("%d\n", Red); //7
		printf("%d\n", Yellow); //3
	}
	{
		enum color mycolor1, mycolor2;
		//mycolor1 = 2;   //这不可以
		mycolor1 = (enum color)1000;
		printf("%d\n", mycolor1); //1000
		if (mycolor1 == 1000)
		{
			printf("很好,mycolor1等于1000\n"); //条件成立
		}
		mycolor1 = Blue;
		if (mycolor1 == Blue)
		{
			printf("很好,mycolor1等于Blue\n"); //条件成立
		}

		printf("断点掐到这里观察\n");
	}
	{
		int abc = Green;
		printf("%d\n", abc); //1
	}
	{
		typedef int INTEGER;
		INTEGER a, b, c; //定义了三个整型变量
	}
	{
		typedef struct date    //date可以省略
		{
			int month;
			int day;
			int year;
		}DATE;
		//DATE birthday;

		DATE birthday; //以往要这样定义：struct date birthday,现在：struct date合并写成DATE，注意不要写成struct DATE birthday;
		DATE* p;       //p为指向此结构体类型数据的指针
	}

	{
		typedef int NUM[100];  //定义NUM为整型数组类型
		NUM n;  //定义n为整型数组变量，原来你要这样定义：int n[100];

		typedef char* PSTRING;  //定义PSTRING为字符指针类型
		PSTRING p, q;//原来你要这样定义：char *p,*q;，注意比较

		typedef int (*POINTER)();//定义POINT为指向函数的指针类型，该函数返回整型值；
		POINTER p1, p2;

		printf("断点掐到这里观察\n");
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
