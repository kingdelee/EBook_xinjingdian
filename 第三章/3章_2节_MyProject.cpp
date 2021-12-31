// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

#pragma warning(disable : 4996) //让编译器忽略一些警告信息，从而让我们可以正常使用scanf()等函数

int main()
{	
	{
		int aa = 65;
		putchar(aa);
	}

	{
		char a, b, c;
		a = 'F'; b = 'A'; c = 'T';
		putchar(a);    //F
		putchar(b);    //A
		putchar(c);    //T

		a = 97;        //字符的ascii码
		b = 98;
		putchar(a);    //a
		putchar('\n'); //换行，下次的输出从新的一行开始
		putchar(b);    //b 
		putchar('\''); //显示一个单引号		

	}
	{
		int a = 4, b = 6;
		printf("%d %d \n", a, b);
	}
	{
		int a = 10;
		printf("a = %d\n", a); //a = 10;
	}

	{
		int abc = 15;
		printf("%o\n", abc);
	}
	{
		int abc = 15;
		printf("%x\n", abc);//f
	}
	{
		short aaa = -10000;
		printf("aaa = %u\n", aaa); //显示了一个意料之外的数值
		printf("aaa = %d\n", aaa); //-10000

	}
	{
		char  abc = 'a';
		printf("abc = %c\n", abc); //abc = a
	}
	{
		int a = 97;
		printf("%c\n", a);
	}

	{
		char a = 'a';
		printf("%d\n", a); //97
	}
	{
		printf("中国的英文拼写是 %s\n", "CHINA"); //中国的英文拼写是 CHINA
	}
	{
		float x, y;
		x = 2.15; y = 3.12;
		printf("%f\n", x + y); //5.270000
	}
	{
		float abc = 0.789058f;
		printf("%.4f\n", abc); //0.7891
		printf("%f\n", abc);   //0.789058
	}
	{
		printf("5%%\n");      //5%
		printf("5%c\n",'%');  //5%
		printf("5%s\n", "%"); //5% 
	}
	{
		printf("5%ss\n", "%");  //5%s
	}

	{
		//char c;
		//c = getchar();
		//putchar(c);   //输入一个啥字符，就输出一个啥字符

	}
	{
		//printf("%c", getchar());//输入一个啥字符，就输出一个啥字符		
	}
	{
		//两个getchar()，实际上只得到了一次从键盘输入数据的机会
		//char c;
		//c = getchar();
		//putchar(c);   		
		//c = getchar(); 
		//putchar(c);
	}
	{
		//int a, b, c;
		//scanf("%d%d%d", &a, &b, &c);  //&地址运算符(表示该变量在内存中的地址)，
						//&日后讲解指针会详细讲解，千万不要把这个字符忘记写了
		//printf("a+b+c= %d", a + b + c);
	}
	{
		int a, b, c;
		//scanf("%d,%d,%d", &a, &b, &c);
		scanf("%d:%d:%d", &a, &b, &c);
		printf("从scanf()得到的三个变量值为%d,%d,%d\n", a, b, c); //通过这行确保scanf输入的数据没问题
		printf("a+b+c= %d", a + b + c);
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
