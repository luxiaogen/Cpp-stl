#include <iostream>
using namespace std;

int main5()
{

  // 指针和属猪
  // 利用指针访问数组中的元素

  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  int *p = arr;
//  cout << "第一个元素为:" << *p << endl;
//  cout << "第二个元素为:" << *(p+1) << endl;
//  cout << "第二个元素为:" << *(p+2) << endl;
//  cout << "第二个元素为:" << *(p+3) << endl;
//  cout << "第二个元素为:" << *(p+4) << endl;

  for (; p - arr < 10; p++)
    cout << *p << "\t";
  cout << endl;


  return 0;
}