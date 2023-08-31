#include <iostream>
#include <string>

using namespace std;

struct Student
{
  string name;
  int age;
  int score;
};

void print_student(const struct Student*);

int main6()
{
  Student stu = {"张三", 15, 70};
  // 通过函数打印结构体变量信息
  print_student(&stu);
  return 0;
}

void print_student(const struct Student *s) // 使用指针节省空间
{
  // 加入 const 之后，一旦有修改操作就会报错，可以放值我们误操作
  cout << "姓名:" << s->name << ",年龄:" << s->age << ",分数:" << s->score << endl;
}