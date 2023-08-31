#include <iostream>
using namespace std;

int main1()
{

  // 1. 定义一个指针  数据类型 * 指针变量名
  int a = 10;
  int *p = &a;

  cout << "a的地址为：" << &a << endl;
  cout << "指针p为：" << p << endl;
  // 2. 使用指针 * 代表解引用
  *p = 100;
  cout << "a = " << a << endl;
  cout << "*p =" << *p << endl;
  return 0;
}