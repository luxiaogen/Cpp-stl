#include <iostream>
#include <list>
#include <string>
using namespace std;
/* 
  list容器 排序案例 对于自定义数据类型 做排序
  按照年龄进行升序，如果年龄相同按照身高进行降序
*/

class Person
{
public:
  Person(string name, int age, int height)
  {
    this->name = name;
    this->age = age;
    this->height = height;
  }
  string name;
  int age;
  int height;
};
void showPerson(const list<Person> l)
{
  for (list<Person>::const_iterator it = l.begin(); it != l.end(); it ++)
    cout << "name:" << it->name << ",age:" << it->age << ",height=" << it->height << endl;
  
}
bool comparePerson(Person &p1, Person &p2)
{
  if (p1.age == p2.age) // 如果年龄相同
    return p1.height > p2.height; // 按照升高降序排列
  // 按照年龄升序    
  return p1.age < p2.age;
}

void test01()
{
  list<Person> l;
  // 插入数据
  Person p1("刘备", 35 , 175);
	Person p2("曹操", 45 , 180);
	Person p3("孙权", 40 , 170);
	Person p4("赵云", 25 , 190);
	Person p5("张飞", 35 , 160);
	Person p6("关羽", 35 , 200);
  l.push_back(p1);
  l.push_back(p2);
  l.push_back(p3);
  l.push_back(p4);
  l.push_back(p5);
  l.push_back(p6);
  cout << "排序前" << endl;
  showPerson(l);
  cout << "排序后" << endl;
  l.sort(comparePerson);
  showPerson(l);
}
int main()
{
  test01();
  return 0;
}