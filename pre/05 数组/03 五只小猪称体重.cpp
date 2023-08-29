#include <iostream>
using namespace std;

/*
  在一个数组中记录了五只小猪的体重，如：int arr[5] = {300,350,200,400,250};
  找出并打印最重的小猪体重。
*/
int main3()
{
  int arr[5] = {300,350,200,400,250};
  int max = arr[0], length = sizeof(arr) / sizeof(arr[0]);
  for (int i = 1; i < length; i++)
  {
    if (max < arr[i])
      max = arr[i];
  }
  cout << "最重的小猪体重为：" << max << endl;
  return 0;
}