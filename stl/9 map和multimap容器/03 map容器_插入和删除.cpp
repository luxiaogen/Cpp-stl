#include <map>
#include <iostream>
using namespace std;

// map容器 插入和删除
/*void printMap(map<int,int> &m)
{
  for (map<int,int>::iterator it = m.begin(); it != m.end(); it ++)
  {
    cout << "key = " << (*it).first << ",value = " << it->second << endl;
  }
  cout << endl;
}*/
/*void test01()
{
  // 插入
  map<int,int> m;
  // 第一种
  m.insert(pair<int, int>(10, 20));
  // 第二种
  m.insert(make_pair(10, 20));
  // 第三种
  m.insert(map<int, int>::value_type(3, 30));
  // 第四种
  m[4] = 40;

  printMap(m);
  // []不建议使用，用途 可以利用key访问到 value
  // 当这个key不存在，就给一个默认的value值

  // 删除
  m.erase(m.begin());
  printMap(m);

  m.erase(4);
  printMap(m);

}*/
int main3()
{
  // test01();

  return 0;
}