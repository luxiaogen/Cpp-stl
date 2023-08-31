#include <iostream>

using namespace std;

void swap(int *, int *);

int main6()
{
  // 地址传递 ——-> 可以修饰实参
  return 0;
}


void swap(int *pa, int *pb)
{
  int temp = *pa;
  *pa = *pb;
  *pb = temp;
}