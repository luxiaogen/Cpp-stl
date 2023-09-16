
#include <iostream>
#include <list>
using namespace std;
/* void printList(const list<int> l)
{
  for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
    cout << *it << " ";
  cout << endl;
}
// 反转
void test01()
{
  list<int> l;
  l.push_back(9);
  l.push_back(6);
  l.push_back(10);
  l.push_back(11);
  l.push_back(2);
  l.push_back(21);
  cout << "反转前" << endl;
  printList(l);
  // 反转
  l.reverse();
  cout << "反转后" << endl;
  printList(l);
}

bool myCompare(int v1, int v2)
{
  return v1 > v2;
}

// 排序
void test02()
{
  list<int> l;
  l.push_back(9);
  l.push_back(6);
  l.push_back(10);
  l.push_back(11);
  l.push_back(2);
  l.push_back(21);
  cout << "排序前" << endl;
  printList(l);
  // 所有不支持随机访问迭代器的容器，不可以用标准算法
  // 不支持随机访问呢迭代器的容器，内部会提供对应一些算法
  // l.sort(); // 成员函数
  // cout << "排序后" << endl;
  cout << "排序后(降序)" << endl;
  l.sort(myCompare);
  printList(l);
} */

int main6()
{
  // test01();
  // test02();
  return EXIT_SUCCESS;
}