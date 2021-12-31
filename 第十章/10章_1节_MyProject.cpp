// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

struct date      //定义一个结构体类型
{
	int month;
	int day;
	int year;
};

struct student     //定义一个结构体类型
{
	int num;           //学号
	char name[100];    //姓名
	int sex;           //性别0：女，1：男
	int age;           //年龄
	char address[100]; //地址

	struct date birthday; //生日，是个结构体
}s1, s2;


int main() 
{	
	{
		struct student s1, s2;
	}
	
	{
		s1.num = 1001;
	}

	{
		s1.birthday.month = 12;
		s1.birthday.day = 30;
		s1.birthday.year = 2018;
	}

	{
		s2.age = s1.age; //赋值
		int agesum = s1.age + s2.age; //求年龄和
		s1.age++; //年龄自+1,因为 .这种结构体成员运算符优先级最高，所以s1.age是个整体
	}

	{
		int* p = &s1.num;
		printf("%d\n", *p);

	}

	{
		struct student s5 = { 100,"王五",1,16,"3栋5楼",10,14,2018 };
		s1.num = 1001;
		int* p = &s1.num;
		printf("%d\n",*p); //1001
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
