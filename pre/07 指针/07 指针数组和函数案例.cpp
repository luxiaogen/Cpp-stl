#include "BubbleSort.h"

int main()
{
  int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
  int len = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, len);
  // 遍历数组
  for (int i = 0; i < len; i++)
    cout << arr[i] << "\t";
  cout << endl;
  return 0;
}