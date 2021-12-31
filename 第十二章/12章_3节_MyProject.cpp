// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

#include <iostream>
#include "stdio.h" 

#pragma warning(disable : 4996)

#pragma pack (1)   //按一字节对齐结构体
struct stu  //定义一个结构体
{
	char name[30];
	int age;
	double score;
};
#pragma pack()  //恢复缺省的字节对齐方式

int main()
{

	{
		struct stu student[2];

		strcpy(student[0].name, "张三abc");
		student[0].age = 21;
		student[0].score = 92.1f;

		strcpy(student[1].name, "李四def");
		student[1].age = 19;
		student[1].score = 86.2f;

		FILE* fp;
		fp = fopen("structfile.bin", "wb"); //文件名随意起 ，这里注意，文件使用方式为wb，表示二进制形式写入
		if (fp == NULL)
		{
			printf("文件打开失败");
		}
		else
		{
			int struclen = sizeof(struct stu); //48：计算一下该结构的大小
			//文件打开成功，向文件中写数据
			int retresult = fwrite(&student, sizeof(struct stu), 2, fp);  //如果第二个参数写成sizeof(struct stu)*2 ，第三个参数写成1，也对
			fclose(fp); //关闭文件
		}
	}

	{
		FILE* fp;
		fp = fopen("structfile.bin", "rb"); //二进制形式读出
		if (fp == NULL)
		{
			printf("文件打开失败");
		}
		else
		{
			int t = sizeof(stu);
			struct stu studentnew[2];
			int retresult = fread(&studentnew, sizeof(struct stu), 2, fp);
			fclose(fp); //关闭文件
		}

	}

	{
		//FILE* fp = fopen("config.txt", "r");
		FILE* fp = fopen("config.txt", "rb"); //带b标记打开文件，会原样读出任何一个字符
		if (!fp)
		{
			printf("文件打开失败\n");
		}
		else
		{
			char   LineBuf[1024];  //足够一行长度
			while (!feof(fp))
			{
				LineBuf[0] = 0; //第一个字符给0；相当于给LineBuf清理成0
				if (fgets(LineBuf, sizeof(LineBuf) - 1, fp) == NULL) //读取一行，遇到换行符结束。									   						   
					continue;

				if (LineBuf[0] == '\0') //文本文件中应该不会出现这种情况，
										//但作为商业代码，这种判断加上为好，防止出意外。
				{
					continue;
				}

			lblprocstring:
				if (strlen(LineBuf) > 0)
				{
					if (LineBuf[strlen(LineBuf) - 1] == 10 || LineBuf[strlen(LineBuf) - 1] == 13) //如果行尾是换行，回车等都截取掉
					{
						LineBuf[strlen(LineBuf) - 1] = 0; //把这个设置为字符串结束标记0
						goto lblprocstring;
					}
				}
				if (strlen(LineBuf) <= 0) //如果一个空行则会出现这种情形
					continue;

				printf("%s\n", LineBuf);
			}
			fclose(fp);
		}
	}
	{
		FILE* fp; //FILE是个结构，fp是指向结构FILE的指针变量（文件指针）
		//fp = fopen("FTest.txt", "w"); //为写而打开文件
		fp = fopen("FTest.txt", "wb");
		if (fp)
		{
			char reco = fputc('a', fp); //仅作为测试代码，就不判断返回值了
			reco = fputc('\r', fp); //写这个回车符0D到文件，看究竟写进去是什么
			reco = fputc('b', fp);
			reco = fputc('\n', fp);//写这个换行符0A到文件，看究竟写进去是什么
			reco = fputc('c', fp);
			fclose(fp); 
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
