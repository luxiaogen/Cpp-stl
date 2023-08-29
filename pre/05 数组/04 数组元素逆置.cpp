#include <iostream>
using namespace std;
/*
  请声明一个5个元素的数组，并且将元素逆置.
  (如原数组元素为：1,3,2,5,4;逆置后输出结果为:4,5,2,3,1);
*/
int main4()
{
  int arr[5] = {1, 3, 2, 5, 4};
  int start = 0; // 起始元素下标
  int end = sizeof(arr) / sizeof(arr[0]) - 1; // 末尾元素小标
  int temp = 0;
  for (; start < end; start++, end --)
  {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
  }
  // 遍历
  cout << "元素逆置后的数组:" << endl;
  for (int i = 0; i < 5; i++)
    cout << arr[i] << "\t";
  return 0;
}



int method1()
{
  int arr[5] = {1, 3, 2, 5, 4};
  int length = sizeof(arr) / sizeof(int), temp = 0;
  for (int i = 0; i <= length / 2 - 1; i++)
  {
    temp = arr[i];
    arr[i] = arr[length - i - 1];
    arr[length - i - 1] = temp;
  }
  for (int i = 0; i < length; i++)
    cout << arr[i] << "\t";
  return 0;
}
