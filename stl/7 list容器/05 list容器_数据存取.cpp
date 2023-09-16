#include <iostream>
#include <list>
using namespace std;

// list数据存取
/* void test01()
{
  list<int> l;
  l.push_back(10);
  l.push_back(20);
  l.push_back(30);
  l.push_back(40);

  // l[0]  不可以用[]访问list容器中的元素
  // l.at(1) 不可以用at方式访问list容器中的元素
  // 原因是list本质链表，不是用连续性空间存储数据，迭代器也是不支持随机访问的
  cout << "l.front() = " << l.front() << endl;
  cout << "l.back()" << l.back() << endl;
  // 验证迭代器是不支持随机访问呢的
  list<int>::iterator it = l.begin();
  it ++; // 支持双向
  it --;
  // it = it + 1;  不支持随机访问
} */
int main5()
{
  // test01();
  return 0;
}