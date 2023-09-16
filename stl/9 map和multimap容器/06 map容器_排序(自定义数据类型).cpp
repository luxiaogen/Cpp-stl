#include <iostream>
#include <map>
#include <string>
using namespace std;

// 自定义数据类型排序
class Person
{
public:
  Person(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
  string name;
  int age;
};
class myCompare
{
public:
  bool operator()(Person p1, Person p2) const
  {
    // 年龄降序
    return p1.age > p2.age;
  }
};
int main()
{
  map<Person, int,myCompare>m;
  Person p1("刘备", 24);
  Person p2("关羽", 28);
  Person p3("张飞", 26);
  Person p4("赵云", 22);
  m.insert(make_pair(p1,100));
  m.insert(make_pair(p2, 800));
  m.insert(make_pair(p3, 200));
  m.insert(make_pair(p4, 300));

  for (map<Person, int, myCompare>::iterator it = m.begin(); it != m.end(); it++)
  {
    cout << "姓名：" << it->first.name << "\t年龄：" << (*it).first.age << "\t收入：" << it->second << endl;
  }
  return EXIT_SUCCESS;
}