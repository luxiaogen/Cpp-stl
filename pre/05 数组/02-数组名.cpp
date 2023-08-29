#include <iostream>
using namespace std;

int main2()
{
  /*
    数组名的用途：
    1. 通过数组名获取数组的占用内存大小
    2. 通过数组名查看数组的首地址
  */
  // 1. 通过数组名获取数组的占用内存大小
  int arr[5] = {1, 2, 3, 4, 5};
  cout << "数组占用内存空间:" << sizeof(arr) << endl;
  cout << "每个元素占用内存空间:" << sizeof(arr[0]) << endl;
  cout << "数组中元素的个数:" << sizeof(arr) / sizeof(arr[0]) << endl;
  // 2. 通过数组名查看数组的首地址
  cout << "数组的首地址:" << (long long)arr << endl;
  cout << "数组中第一个元素的地址:" << (long long)&arr[0] << endl;
  cout << "数组中第二个元素的地址:" << (long long)&arr[1] << endl;

  // 数组名是常量，不可以进行赋值常量
  // arr = 10;

  return 0;
}