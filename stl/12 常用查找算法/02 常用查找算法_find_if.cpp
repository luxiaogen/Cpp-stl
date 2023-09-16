#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
// 常用查找算法 find_if()
// 1、查找内置数据类型
/*class GreaterFive
{
public:
  bool operator()(int val)
  {
    return val > 5;
  }
};
void test01()
{
  vector<int> v;
  for (int i = 0; i < 10; i++)
    v.push_back(i);

   vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());
  if (pos == v.end())
    cout << "没有找到" << endl;
  else cout << "找到了，这个数是：" << *pos << endl;

}

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

class Greater20
{
public:
  bool operator()(const Person &p)
  {
    return p.age > 20;
  }
};

// 2、查找自定义数据类型
void test02()
{
  vector<Person> v;

  //创建数据
  Person p1("aaa", 10);
  Person p2("bbb", 20);
  Person p3("ccc", 30);
  Person p4("ddd", 40);

  v.push_back(p1);
  v.push_back(p2);
  v.push_back(p3);
  v.push_back(p4);
  // 查找年龄大于20的
  vector<Person>::iterator pos = find_if(v.begin(), v.end(), Greater20());
  if (pos == v.end())
    cout << "没有找到" << endl;
  else
    cout << "找到了，姓名：" << pos->name << ",年龄：" << pos->age << endl;
}*/
int main2()
{
  // test01();
  // test02();
  return 0;
}