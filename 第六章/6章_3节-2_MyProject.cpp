// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>

#pragma warning(disable : 4996) //让编译器忽略一些警告信息，从而让我们可以正常使用scanf()等函数

int main()
{	
	{
		char c[] = "China";
		printf("%s\n", c); //China
	}
	{
//		char c[100];
//		scanf("%s", c); //从键盘输入一个字符串
//		printf("%s\n", c); //输出该字符串
	}
	{
//		char str1[10], str2[10], str3[10];
//		scanf("%s %s %s", str1, str2, str3);
//		printf("断点掐在这里方便观察\n");
	}
	{
//		char str[100];
//		scanf(" %s", str);
//		printf("断点掐在这里方便观察\n");
	}
	{
		int a;
//		scanf("%d", &a);
	}
	{
//		char str1[10], str2[10], str3[10];
//		scanf("%s %s %s", &str1, str2, str3);
//		printf("断点掐在这里方便观察\n");
	}
	{
		char str1[10] = "hello!";
		printf("%d\n", str1);  //11532676,这里加不加&结果一样，这说明str和&str被系统等同看待。
		printf("%d\n", &str1); //11532676
		int i;
		printf("%d\n", &i);    //11532664,但我这个如果不加&打印出来的就是i的值了而不是i的地址了
	}
	{
		char str[100] = "Are you ok ? ";
		puts(str); //Are you ok ? 		
		//printf("% s\n", str);
	}

	{
		char str1[10] = "one";
		char str2[15] = "two";
		strcat(str1, str2);
		printf("%s\n", str1); //onetwo
	}
	{
		char str1[10] = "one1234";
		char str2[15] = "two";
		strcpy(str1, str2);
		printf("断点掐在这里方便观察\n");
	}
	{
		char c1, a[5];  //a数组能引用的为a[0]~a[4];
		a[0] = 'A'; a[1] = 'B'; a[2] = 'C'; a[3] = 'D'; a[4] = 'E';
		c1 = 'i';
	}
	{
		int reco;
		char str1[10] = "one1234";
		char str2[15] = "one1234";
		reco = strcmp(str1, str2); 
		printf("reco = %d\n", reco); //reco = 0
	}
	{
		int reco;
		char str1[10] = "one1234";
		char str2[15] = "ope1";
		reco = strcmp(str1, str2); 
		printf("reco = %d\n", reco);//reco = -1，说明str2比str1大。
	}
	{
		char str1[120] = "ope1";
		char str2[150] = "断点abc停这";
		int len1 = strlen(str1);   //4，当然结果没包括末尾的\0
		int len2 = strlen(str2);   //11，每个汉字大概占2个字节，当然结果也没包括末尾的\0
		int len3 = strlen("我爱China");  //9，同样每个汉字大概占2个字节，当然结果也没包括末尾的\0
		printf("断点掐在这里方便观察\n");
	}
	{
		int a;  //不管a中存什么内容
		int soa = sizeof(a);  //4： a所占的内存字节数，和a中保存的内容无关
		printf("断点掐在这里方便观察\n");
	}
	{
		int is = sizeof(int);  //4
		int ds = sizeof(double);//8
		printf("断点掐在这里方便观察\n");
	}
	{
		char str1[120] = "ope1";
		int ststr = strlen(str1); //4，值和str1中内容有关，和str1定义时大小无关
		int sostr = sizeof(str1); //120，值和str1定义时大小有关，和str1中内容无关。
		printf("断点掐在这里方便观察\n");
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
