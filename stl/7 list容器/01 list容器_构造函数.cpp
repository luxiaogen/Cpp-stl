#include <iostream>
#include <list>
using namespace std;

void printList(const list<int> l)
{
  for (list<int>::const_iterator it = l.begin(); it != l.end(); it ++ )
    cout << *it << " ";
  cout << endl;
}
void test01()
{
  // 默认构造
  list<int> l1;
  l1.push_back(10);
  l1.push_back(20);
  l1.push_back(30);
  l1.push_back(40);

  printList(l1);

  // 区间方式构造
  list<int> l2(l1.begin(), l1.end());
  printList(l2);
  // 拷贝构造
  list<int> l3(l2);
  printList(l3);

  // n个elem
  list<int> l4(10, 1000);
  printList(l4);

  list<int> l5 = {1,2,3,4,5};
  printList(l5);
}
int main()
{
  test01();
  return EXIT_SUCCESS;
}