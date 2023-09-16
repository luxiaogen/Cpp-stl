#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// 常用查找算法 find
/*class Person
{
public:
  Person(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
  // 重载 == 底层find知道如何对比person数据类型
  bool operator==(const Person &p)
  {
    if (this->name == p.name && this->age == p.age)
      return true;
    return false;
  }
  string name;
  string age;
};
void test01()
{
  vector<int> v;
  for (int i = 0; i < 10; i++)
    v.push_back(i);

  // 查找 容器中 是否有 5这个元素
  vector<int>::iterator it = find(v.begin(), v.end(), 5);
  if (it == v.end())
    cout << "没有找到!" << endl;
  else cout << "找到:" << *it << endl;
}

void test02()
{
  vector<Person> vps;
  Person p1("aaa", 10);
  Person p2("bbb", 20);
  Person p3("ccc", 30);
  Person p4("ddd", 40);

  // 放入到容器
  vps.push_back(p1);
  vps.push_back(p2);
  vps.push_back(p3);
  vps.push_back(p4);

  Person pp("bbb", 20);

  vector<Person>::iterator it = find(vps.begin(), vps.end(), pp);
  if (it == vps.end())
    cout << "没有找到" << endl;
  else cout << "找到了" << endl;
}*/
int main1()
{
  // test01();
  // test02();
  return 0;
}