#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
/*
  学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
  设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
  学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
  最终打印出老师数据以及老师所带的学生数据。
 */
using namespace std;

struct Student
{
  string name;
  int score;
};

struct Teacher
{
  string name;
  struct Student stus[5];
};
void allocate_space(Teacher *, int);
void print_teachers(Teacher *, int);
int main7()
{
  // 随机种子
  srand((unsigned int)time(NULL));
  Teacher t_array[3]; //老师数组
  int len = sizeof(t_array) / sizeof(Teacher);
  allocate_space(t_array, len);
  print_teachers(t_array, len);
  return 0;
}

void allocate_space(Teacher t_array[], int len)
{
  string teacher_name = "Teacher_";
  string student_name = "Student_";
  string name_seed = "ABCDE";
  for (int i = 0; i < len; i ++ )
  {
    t_array[i].name = teacher_name + name_seed[i];
    for (int j = 0; j < 5; j ++)
    {
      t_array[i].stus[j].name = student_name + name_seed[j];
      t_array[i].stus[j].score = rand() % 61 + 40; // [40-100]
    }
  }
}


void print_teachers(Teacher t_array[], int len)
{
  for (int i = 0; i < len; i++)
  {
    cout << "教师姓名:" << t_array[i].name << "学生有如下：" << endl;
    for (int j = 0; j < 5; j++)
      cout << "\t学生姓名: " << t_array[i].stus[j].name << "分数: " << t_array[i].stus[j].score << endl;
    cout << "===================================" << endl;
  }
}

