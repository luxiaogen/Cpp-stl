#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Transform
{
public:
  int operator()(int val)
  {
    return val;
  }
};

class MyPrint
{
public:
  void operator()(int val)
  {
    cout << val << " ";
  }
};
// 常用遍历算法 搬运 transform
void test01()
{
  vector<int> v;
  for (int i = 0; i < 10; i++)
    v.push_back(i);

  vector<int> vTarget; // 目标容器
  vTarget.resize(v.size()); // 目标容器，需要提前开辟空间
  transform(v.begin(), v.end(), vTarget.begin(),Transform());
  for_each(vTarget.begin(), vTarget.end(), MyPrint());
  cout << endl;
}
int main()
{
  test01();
  return 0;
}