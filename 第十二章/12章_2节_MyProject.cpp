// MyProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//公众号：程序员速成   ，内含优质视频教程，欢迎关注

#include <iostream>
#include "stdio.h" 

#pragma warning(disable : 4996)

int main()
{
    //std::cout << "Hello World!\n"; 
	
	{
		FILE* fp; //FILE是个结构体，fp是指向结构体FILE的指针变量（文件指针）
		fp = fopen("A1", "r"); //打开名字叫"A1"的文件，"r"表示文件使用方式为只读		
		if (fp == NULL)
		{
			//文件打开失败的处理代码		
		}

		if (fp != NULL)
			fclose(fp); //fp就是fopen函数的返回值（文件指针）	

	}	
	
	{
		FILE* fp; //FILE是个结构，fp是指向结构FILE的指针变量（文件指针）
		fp = fopen("FTest.txt", "wb"); //为写而打开文件
		if (fp == NULL)
		{
			printf("文件打开失败\n");
		}
		else
		{
			//文件打开成功才走这里
			char reco = fputc('a', fp);
			if (reco == EOF)
			{
				//写失败时的处理代码				
			}
			else
			{
				reco = fputc('d', fp); //这里并没有判断是否写成功，不建议这样写，不安全
				reco = fputc('e', fp);	//这里依旧没有判断是否写成功
			}
			fclose(fp); //文件打开成功的情况下，应该及时关闭文件
		}
	}
	{
		FILE* fp; //FILE是个结构，fp是指向结构FILE的指针变量（文件指针）
		fp = fopen("FTest.txt", "r");  //文件刚打开，文件当前位置指针指向开头
		if (fp == NULL)
		{
			printf("文件打开失败");
		}
		else
		{
			//文件打开成功才走这里
			char reco = fgetc(fp); //每读一个字符，文件当前位置指针自动向下走一个字符			
			//while (reco != EOF) //读入失败或者到文件结束这个条件都成立。
			while (!feof(fp)) //文件没有结束
			{
				putchar(reco); //屏幕上输出一个字符
				reco = fgetc(fp);
			}
			fclose(fp);
		}		
	}

	{
		FILE* fp = fopen("config.txt", "r");
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
					                   //发现文件中是\r\n，但是fgets读进来只读到了\n(换行),\r被他给舍弃了。
					           //可以这样认为，fgets中，\n就同时具有\r\n的能力，所以fget在读一行时，遇到\r就舍弃，只保留\n
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
