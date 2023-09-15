#include <iostream>
#include <deque>
using namespace std;
/*void printDeque(const deque<int> d)
{
  for (deque<int>::const_iterator it = d.begin(); it != d.end(); it ++ )
    cout << *it << " ";
  cout << endl;
}
// 两端操作
void test01()
{
  deque<int> d1;
  // 尾插
  d1.push_back(10);
  d1.push_back(20);
  // 头插
  d1.push_front(100);
  d1.push_front(200);
  printDeque(d1);

  // 尾删
  d1.pop_back();
  printDeque(d1); // 200 100 10
  // 头删
  d1.pop_front();
  printDeque(d1); // 100 10

  // 插入操作
   d1.insert(d1.begin(), 1000);
   d1.insert(d1.begin(), 1, 10000);
  deque<int> d2;
  d2.push_back(9);
  d2.push_back(8);
  d2.push_back(7);
  d1.insert(d1.begin(),d2.begin(), d2.end());
  printDeque(d1);
  
}

void test02()
{
  deque<int> d;
  d.push_back(10);
  d.push_back(20);
  d.push_front(100);
  d.push_front(200);
  printDeque(d);

  // 删除
  deque<int>::iterator it = d.begin();
  it++;
  d.erase(it);
  printDeque(d);

  // 按区间方式删除
  // 清空
  d.erase(d.begin(), d.end());
  d.clear();
  printDeque(d);

}*/
int main4()
{
  // test01();
  // test02();
  return 0;
}