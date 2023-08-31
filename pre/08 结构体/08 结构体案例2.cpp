#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
  设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。
  通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
 */
struct Hero
{
  string name;
  int age;
  string sex;
};

void bubble_sort(Hero *, int);

void print_heroes(Hero *, int);

int main()
{
  // 随机种子
  srand((unsigned int) time(NULL));
  Hero heroes[5] = {
          {"刘备", 23, "男"},
          {"关羽", 22, "男"},
          {"张飞", 20, "男"},
          {"赵云", 21, "男"},
          {"貂蝉", 19, "女"},
  };
  int len = sizeof(heroes) / sizeof(Hero);
  print_heroes(heroes, len);
  bubble_sort(heroes, len);
  cout << "冒泡排序后:" << endl;
  cout << "========================" << endl;
  print_heroes(heroes, len);
  return 0;
}

void bubble_sort(Hero heroes[], int len)
{
  Hero temp;
  for (int i = 0; i < len - 1; i++)
    for (int j = 0; j < len - i - 1; j++)
      if (heroes[j].age > heroes[j + 1].age)
        temp = heroes[j], heroes[j] = heroes[j + 1], heroes[j + 1] = temp;
}

void print_heroes(Hero heroes[], int len)
{
  for (int i = 0; i < len; i++)
    cout << "名字:" << heroes[i].name << ",年龄:" << heroes[i].age
         << ",性别:" << heroes[i].sex << endl;
}