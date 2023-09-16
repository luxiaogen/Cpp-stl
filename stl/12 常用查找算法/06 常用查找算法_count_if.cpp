#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Greater4
{
public:
  bool operator()(int val)
  {
    return val > 4;
  }
};
void test01()
{
  vector<int> v = {1,4,5,6,2,2,2,4,4,4};
  int num = count_if(v.begin(), v.end(), Greater4());
  cout << "大于4的个数为：" << num << endl;
}
// 自定义数据类型
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

class AgeLess35
{
public:
  bool operator()(const Person &p)
  {
    return p.age < 35;
  }
};
void test02()
{
  vector<Person> v;

  Person p1("刘备", 35);
  Person p2("关羽", 35);
  Person p3("张飞", 35);
  Person p4("赵云", 30);
  Person p5("曹操", 25);

  v.push_back(p1);
  v.push_back(p2);
  v.push_back(p3);
  v.push_back(p4);
  v.push_back(p5);


  int num = count_if(v.begin(), v.end(), AgeLess35());
  cout << "年龄小于35的人数：" << num << endl;
}

int main()
{
  // test01();
  test02();
  return 0;
}