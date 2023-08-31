#include <iostream>
using namespace std;

int main2()
{
  // 指针所占内存空间 32位下--4字节   64位下--8字节
  int a = 10;
  int *p = &a;

  cout << "sizeof(int *) = " << sizeof(int *) << endl;
  cout << "sizeof(int *) = " << sizeof(float *) << endl;
  cout << "sizeof(int *) = " << sizeof(double *) << endl;
  cout << "sizeof(int *) = " << sizeof(char *) << endl;
  return 0;
}