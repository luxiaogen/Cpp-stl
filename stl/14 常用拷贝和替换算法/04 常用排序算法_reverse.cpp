#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// 常用排序算法 _reverse() 反转
void myPrint(int val)
{
  cout << val << " ";
}
void test01()
{
  vector<int> v = {10, 20, 30, 40, 50};
  cout << "反转前:" << endl;
  for_each(v.begin(), v.end(), myPrint);
  cout << endl;
  cout << "反转后:" << endl;
  reverse(v.begin(), v.end());
  for_each(v.begin(), v.end(), myPrint);
  cout << endl;
}
int main4()
{
  test01();
  return 0;
}