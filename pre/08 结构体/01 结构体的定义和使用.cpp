#include <iostream>
#include <string> // string 输出的话要加这个头文件
using namespace std;


// 1、创建学生数据类型：学生包括（姓名，年龄，分数）
// 自定义数据类型，一些类型集合组成的一个类型
struct Student
{
  // 成员列表
  // 姓名
  string name;
  // 年龄
  int age;
  //分数
  int score;
};

// 2. 通过学生类型创建具体学生

// 2.1 struct Student s1
// 2.2 struct Student s2 = { .... }
// 2.3 stuct {} s1;

int main1()
{
  // 2.1
  // 在C++struct 创建关键字可以省略
  Student s1;
  s1.name = "小王";
  s1.age = 23;
  s1.score = 99;
  // 2.2
  struct Student s2 = {"小张", 21, 99};
  struct {
    string name;
    int age;
    int score;
  } stu = {"芜湖大司马", 41, 1};
  cout << "姓名 : " << stu.name << "，年龄：" << stu.age << "，分数：" << stu.score << endl;


  return 0;
}