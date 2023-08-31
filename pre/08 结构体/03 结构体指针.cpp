#include <iostream>
#include <string>

using namespace std;

// 结构体指针
struct Student
{
  string name;
  int age;
  int score;
};

int main3()
{
  struct Student stu = {"小王", 28, 100};
  struct Student *p = &stu;
  cout << "姓名:" << p->name << ",年龄:"
       << p->age << ",成绩:" << p->score << endl;
  cout << "姓名:" << (*p).name << ",年龄:"
       << (*p).age << ",成绩:" << (*p).score << endl;
  return 0;
}