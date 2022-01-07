// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

//#include "stdio.h"  写不写都可以
#include <iostream>
#include <string>

// video
// doc

#pragma warning(disable : 4996) //让编译器忽略一些警告信息，从而让我们可以正常使用scanf()等函数

int main()
{
    using namespace std;

	{

        char c1[50000] = "opp";
        cout << c1 << endl;

		const char *ffffffffccccccccdddddddsssssss = "hello world";
		const char *ffffffffccccccccdddddddsssssss2 = "hello world";
		const char *ffffffffccccccccdddddddsssssss3 = "hello world";
		const char *ffffffffccccccccdddddddsssssss4 = "aaa";
        // char 字符串 不支持拼接
//		const char *ffffffffccccccccdddddddsssssss5 = "hello world" + ffffffffccccccccdddddddsssssss4;
        // STL string 字符串类
        string s1 = "aa";
        string s2 = "bb";
        string s3 = "bb";
        string s4 = "aabb";
//        string s4 = "aabb";
//        string s4 = "aabb";
//        string s4 = "aabb";
        string s5 = s1+s2;

        // 变量自身的地址
        cout << &s1 << endl;
        cout << &s2 << endl;
        cout << &s3 << endl;
        cout << &s4 << endl;
        cout << &s5 << endl;

        //
        cout << "1-------∂" << endl;

        cout << *&s1 << endl;
        cout << *&s2 << endl;
        cout << *&s3 << endl;
        cout << *&s4 << endl;
        cout << *&s5 << endl;

        cout << "2-------∂" << endl;


        cout << &*&s1 << endl;
        cout << &*&s2 << endl;
        cout << &*&s3 << endl;
        cout << &*&s4 << endl;
        cout << &*&s5 << endl;

        cout << "-------∂" << endl;

//		const char *ffffffffccccccccdddddddsssssss4 = "hello world" + "aaa";
        cout << &ffffffffccccccccdddddddsssssss << endl;
        cout << &ffffffffccccccccdddddddsssssss2 << endl;
        cout << &ffffffffccccccccdddddddsssssss3 << endl;
        cout << (*ffffffffccccccccdddddddsssssss) << endl;
        cout << (*ffffffffccccccccdddddddsssssss2) << endl;
        cout << (*ffffffffccccccccdddddddsssssss3) << endl;
        cout << (*&ffffffffccccccccdddddddsssssss3) << endl;
        cout << (*&ffffffffccccccccdddddddsssssss3) << endl;
        cout << (*&ffffffffccccccccdddddddsssssss3) << endl;
        cout << &"hello world" << endl;
        cout << &"hello world" << endl;
        cout << &"hello world222" << endl;
        cout << &*"hello world" << endl;
        cout << &*ffffffffccccccccdddddddsssssss << endl;
        printf("断点下到这里方便跟踪调试\n");
	}
	{
		char c[11] = "I am happy";
	}
	{
		char c[] = { 'I',' ','a','m',' ','h','a','p','p','y' };  //我们通过掐断点调试发现这里是c[10];
		printf("%s\n", c);
		printf("断点下到这里方便跟踪调试\n");
	}
	{
		char c[] = "I am happy222222"; //通过掐断点调试发现数组c大小是11，这第11个也就是c[10]，被系统设置为了‘\0’
		printf("%s\n", c);
		printf("断点下到这里方便跟踪调试\n");

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
