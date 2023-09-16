#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// 内置数据类型
/*void test01()
{
  vector<int> v = {1,2,4,5,3,4,4};

  int num = count(v.begin(), v.end(), 4);
  cout << "4的个数为：" << num << endl;
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
  // 重写 == 关系运算符
  bool operator==(const Person &p)
  {
    if (this->age == p.age)
      return true;
    return false;
  }
  string name;
  int age;

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

  // 查找和诸葛亮相同岁数的人
  Person p("诸葛亮",35);
  int num = count(v.begin(), v.end(), p);
  cout << "和诸葛亮同岁的人数：" << num << endl;
}*/

int main5()
{
  // test01();
  // test02();
  return 0;
}