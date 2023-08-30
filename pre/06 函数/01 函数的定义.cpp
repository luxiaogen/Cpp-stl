#include <iostream>
using namespace std;
int add(int, int);
int main1()
{
  int result = add(1, 1);
  cout << "result = " << result << endl;

  return 0;
}


/*
 * 加法函数
 *  功能：传入两个整型数据，计算数据相加的结果，并返回
 */
int add(int num1, int num2)
{
  return num1 + num2;
}