#include <iostream>
#include <vector>
using namespace std;
// 容量和大小
/* void printVector(vector<int> v)
{
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    cout << *it << " ";
  cout << endl;
}
void test01()
{
  vector<int> v1;
  for (int i = 0; i < 10; i++)
    v1.push_back(i + 1);
  printVector(v1);

  if (v1.empty()) // 为空 代表容器为空
    cout << "v1为空" << endl;
  else
  {
    cout << "v1不为空" << endl;
    cout << "v1的容量为：" << v1.capacity() << endl;
    cout << "v1的大小为：" << v1.size() << endl;
  }

  // 重新指定大小
  v1.resize(15, 100); // 利用重载技术，可以指定默认填充值，参数2
  printVector(v1);

  v1.resize(5);
  printVector(v1); // 如果更新指定的比原来短了，超出部分会删除掉
} */
int main3()
{
  // test01();
  return EXIT_SUCCESS;
}