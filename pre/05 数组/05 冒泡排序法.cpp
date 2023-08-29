#include <iostream>

using namespace std;

int main5()
{
  int arr[9] = {4, 2, 8, 0, 5, 7, 1, 3, 9}, temp = 0;
  int len = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < len - 1; i++)
    for (int j = 0; j < len - i -1; j ++ )
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
  cout << "冒泡排序后:" << endl;
  for (int i = 0; i < len; i++)
    cout << arr[i] << "\t";

  return 0;
}