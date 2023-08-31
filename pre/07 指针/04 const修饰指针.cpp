#include <iostream>

using namespace std;


/*
 * 常量指针：指针的指向可以修改，但指针指向的值不可以改  const int *p
 * 指针常量：指针的指向不可以改，但指针指向的值可以改  int *const p
 *
 */
int main4()
{
  // 1. const 修饰指针 常量指针
  int a = 10, b = 10;
  const int *p = &a;
  // *p = 20; // 错误
  p = &b;
  // 2. const 修饰常量
  int *const p2 = &a;
  *p2 = 100; // 正确】
  // p2 = &b; // 错误
  // 3. const修饰指针和常量  指针的指向和指向的值都不可以改变
  const int *const p3 = &a;
  return 0;
}