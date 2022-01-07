
#include <iostream>

  int g_a = 6;

  static void g_func()   //定义只在本文件中使用的函数
  {
	  //........
  }

  void g_otherfunc()
  {
	  printf("外部函数g_otherfunc()\n");
  }