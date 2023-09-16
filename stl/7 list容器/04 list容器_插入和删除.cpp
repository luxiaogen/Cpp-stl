#include <iostream>
#include <list>
using namespace std;
// list容器的插入和删除
/* void printList(const list<int> l)
{
  for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
    cout << *it << " ";
  cout << endl;
}

// 插入
void test01()
{
  list<int> l1;

  // 尾插
  l1.push_back(10);
  l1.push_back(20);
  l1.push_back(30);

  // 头插
  l1.push_front(300);
  l1.push_front(200);
  l1.push_front(100);

  // 100 200 300 10 20 30
  printList(l1);

  // 尾删
  // 100 200 300 10 20
  l1.pop_back();
  printList(l1);

  // 头删
  // 200 300 10 20
  l1.pop_front();
  printList(l1);

  // insert 插入
  list<int>::iterator it = l1.begin();
  it ++;
  // 200 1000 300 10 20 
  l1.insert(it, 1000);
  printList(l1);

  // 删除
  it = l1.begin();
  l1.erase(it);
  // 1000 300 10 20
  printList(l1);

  // 清空
  // l1.erase(it, l1.end());
  // l1.clear();
  // 1000 300 10 20 10
  l1.push_back(10);
  l1.remove(10);
  // 1000 300 20
  printList(l1);
} */

int main4()
{
  // test01();
  return EXIT_SUCCESS;
}