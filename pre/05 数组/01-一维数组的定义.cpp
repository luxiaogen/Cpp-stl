#include <iostream>

using namespace std;

int main1()
{
  // 数组的定义
  /*
   *  1. 数据类型 数组名[数组长度];
   *  2. 数据类型 数组名[数组长度] = {数组元素...};
   *  3. 数据类型 数组名[] = {....};
   */
  /*int arr1[3];
  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  for (int i = 0; i < 3; i++)
    cout << arr1[i] << endl;*/

  // 2.
  // 如果在初始化数据时候，没有全部填写完，会用0填补数组元素
//  int arr2[5] = {10, 20, 30};
  // 利用循环 输出数组元素
  /*for (int i = 0; i < 5; i++)
  {
    cout << arr2[i] << endl;
  }*/

  // 3.
  // 定义数组的时候，必须有初始长度

  int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8};
  for (int i = 0; i < 8; i++)
  {
    cout << arr3[i] << endl;
  }
  return 0;
}