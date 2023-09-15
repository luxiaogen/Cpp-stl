#include <iostream>
#include <string>
using namespace std;
void test01()
{
  string str = "abcdefg";
  string subStr = str.substr(1, 3);
  cout << "subStr = " << subStr << endl;
}
// 实用操作
void test02()
{
  string str = "zhangsan@sina.com";
  // 截取用户名
  string username = str.substr(0, str.find("@"));
  cout << "username = " << username << endl;
}
int main()
{
  // test01();
  test02();

  return 0;
}