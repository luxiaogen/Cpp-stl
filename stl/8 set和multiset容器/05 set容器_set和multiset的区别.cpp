#include <iostream>
#include <set>
using namespace std;

// set 和 multiset的区别
/*void test01()
{
  set<int> s;
  pair<set<int>::iterator, bool> ret = s.insert(10);
  if (ret.second)
    cout << "第一次插入成功" << endl;
  else
    cout << "第一次插入失败" << endl;

  ret = s.insert(10);
  if (ret.second)
    cout << "第二次插入成功" << endl;
  else
    cout << "第二次插入失败" << endl;
}

void test02()
{
  multiset<int> ms;
  // 允许插入重复数据
  ms.insert(10);
  ms.insert(10);
  for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it ++)
    cout << *it << " ";
  cout << endl;
}*/
int main5()
{
  // test01();
  // test02();
  return 0;
}