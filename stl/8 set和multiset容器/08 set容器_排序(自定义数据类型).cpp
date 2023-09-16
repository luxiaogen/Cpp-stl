#include <iostream>
#include <set>
#include <string>
using namespace std;
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
class comparePerson
{
public:
  bool operator()(const Person &p1, const Person &p2)
  {
    // 按照年龄降序
    return p1.age > p2.age;
  }
};
void test01()
{
  // 自定义数据类型 都会指定排序规则
  set<Person, comparePerson> s;
  // 准备数据
  Person p1("刘备", 35);
  Person p2("曹操", 45);
  Person p3("孙权", 40);
  Person p4("赵云", 25);
  Person p5("张飞", 35);
  Person p6("关羽", 35);
  s.insert(p1);
  s.insert(p2);
  s.insert(p3);
  s.insert(p4);
  s.insert(p5);
  s.insert(p6);

  // 遍历
  for (set<Person,comparePerson>::iterator it = s.begin(); it != s.end(); it ++ )
    cout << "name :" << it->name << ",age :" << it->age << endl;
}
int main()
{
  test01();
  return EXIT_SUCCESS;
}