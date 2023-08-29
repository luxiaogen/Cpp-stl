#include <iostream>

using namespace std;

/*
 * 二维数组名称用途
 *  1. 可以查看占用空间大小
 *  2. 可以查看二维数组的首地址
 */
int main7()
{
  int arr[2][3] = {
          {1, 2, 3},
          {4, 5, 6}
  };
  cout << "二维数组占用内存空间为：" << sizeof(arr) << endl;
  cout << "二维数组第一行占用空间为:" << sizeof(arr[0]) << endl;
  cout << "二维数组第二行占用空间为：" << sizeof(arr[1]) << endl;
  cout << "二维数组每个元素占用空间为：" << sizeof(arr[0][0]) << endl;

  cout << "二维数组的行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
  cout << "二维数组的列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

  cout << "二维数组首地址为：" << (long long) arr << endl;
  cout << "二维数组第一行首地址为：" << (long long) arr[0] << endl;
  cout << "二维数组第二行首地址为：" << (long long) arr[1] << endl;
  cout << "二维数组第一个元素的地址为：" << (long long) &arr[0][0] << endl;

  return 0;
}