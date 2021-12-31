// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

#pragma warning(disable : 4996)

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
}stu[3];

void func1(struct student* pd)
{
	pd->age = 118;
}

void func1(struct student d) //与上个func1函数象比，参数不同，因此同名函数可以同时存在，这叫函数重载
{
	d.age = 118;
}


int main() 
{	
	{
		struct student stu[3]; //可用下标0~2

	}
	{
		struct student stu[3] = {
			{1001,"张三",1,18,"1栋1单元",12,30,2000},
			{1002,"李四",1,20,"2栋2单元",11,15,1998},
			{1003,"王五",1,22,"3栋3单元",10,15,1996},
		}; //可用下标0~2
	}
	{
		struct student stu[] = {
			{1001,"张三",1,18,"1栋1单元",12,30,2000},
			{1002,"李四",1,20,"2栋2单元",11,15,1998},
			{1003,"王五",1,22,"3栋3单元",10,15,1996},
		}; //可用下标依旧是0~2

		stu[1].age++; //年龄+1
		printf("name = %s\n", stu[1].name); //name = 李四
		printf("age = %d\n", stu[1].age);   //age = 21

		printf("断点停到这里方便调试\n");
	}
	{
		struct student stu;  //结构体变量
		struct student *ps;  //结构体变量的指针
		ps = &stu;
		strcpy(stu.name, "小虎"); //如果这行编译失败记得前面加#include <string.h>
		                          //如果再编译失败，可以在文件开头增加  #pragma warning(disable : 4996)
		stu.age = 16;

		(*ps).num = 1008; //第一种用*ps，因为*优先级不如结构体成员运算符.高，所以这里用()
		ps->sex = 1; //第二种用->，->叫指向结构体成员运算符，优先级也是最高的
		printf("name=%s\n", ps->name); //name = 小虎
		printf("age=%d\n", ps->age); //age=16
		printf("num=%d\n", ps->num); //num=1008
		printf("sex=%d\n", ps->sex); //sex=1

	}

	{
		//定义并初始化结构体数组
		struct student stu[3] = {
			{1001,"张三",1,18,"1栋1单元",12,30,2000},
			{1002,"李四",1,20,"2栋2单元",11,15,1998},
			{1003,"王五",1,22,"3栋3单元",10,15,1996},
		}; //可用下标0~2
		struct student* ps;  //结构体变量的指针
		ps = stu; //数组名作为数组首地址，我们说过，数组中的数据在内存中都是挨着存放的
		for (int i = 0; i < 3; i++)
		{
			printf("name=%s\n", ps->name);
			printf("age=%d\n", ps->age);
			printf("num=%d\n", ps->num);
			ps++; //这个++意味着一次跳过一个数组元素所占的字节数
			printf("-----------------------\n");
		}
		int ilen = sizeof(struct student);
		printf("ilen = %d\n", ilen); //224

		{
			ps = stu;  //让ps指向数组stu的第一个元素
			printf("%d\n", (++ps)->num);  //1002，++在ps前面，表示先加后用，可以掐断点并观察看ps指向哪里了(指向1002这个元素)
		}           
		
		{
			ps = stu;   //让ps指向数组stu的第一个元素
			printf("%d\n", (ps++)->num);   //1001，++在ps后面，表示先用后加，可以掐断点并观察看ps指向哪里了(指向1002这个元素)
			printf("断点停到这里方便调试\n");

			//ps = &stu[0].num; 写法错误不被允许
		}

		{
			struct student* ps;
			ps = stu;
			func1(ps); //执行 后stu[0]里的age就是118了；			
			printf("stu[0].age = %d\n",stu[0].age); //stu[0].age = 118
		}
		{
			stu[0].age = 12; //随便给个值，方便结果比较
			func1(stu[0]);
			printf("stu[0].age = %d\n", stu[0].age); //stu[0].age = 12
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
