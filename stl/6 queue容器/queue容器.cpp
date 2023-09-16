#include <iostream>
#include <string>
#include <queue>
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
// 队列 queue
void test01()
{
  // 创建队列容器
  queue<Person> q;
  // 准备数据
  Person p1("唐僧", 19);
  Person p2("孙悟空", 29);
  Person p3("猪八戒", 39);
  Person p4("沙僧", 49);
  // 入列
  q.push(p1);
  q.push(p2);
  q.push(p3);
  q.push(p4);

  // 判断只要队列不为空 查看对头 出列操作
  while (!q.empty())
  {
    cout << "队头元素---姓名：" << q.front().name << ",年龄:" << q.front().age << endl;
    cout << "队尾元素---姓名：" << q.back().name << ",年龄:" << q.back().age << endl;
    q.pop();
  }
  cout << "队列的大小：" << q.size() << endl;
}
int main()
{

  test01();
  return EXIT_SUCCESS;
}