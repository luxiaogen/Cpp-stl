#include <iostream>
#include "swap.h"
using namespace std;

/**
 * 1. 创建.h后缀的头文件
 * 2. 出那个键.cpp后缀名的源文件
 * 3. 在头文件中写函数声明
 * 4. 在源文件中写函数的定义
 */
int main()
{

  int a = 1, b= 2;
  swap(&a, &b);
  cout << "a = " << a << ",b = " << b << endl;
  return 0;
}

