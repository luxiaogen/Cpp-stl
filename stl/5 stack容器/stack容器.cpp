#include <iostream>
#include <stack>
using namespace std;

void test01()
{
  stack<int> stack;
  stack.push(10);
  stack.push(20);
  stack.push(30);
  stack.push(40);

  // 只要栈不为空，查看栈顶，并且执行出栈操作
  while (!stack.empty())
  {
    // 查看栈顶元素
    cout << "栈顶元素：" << stack.top() << endl;
    // 出栈
    stack.pop();
  }

  // 查看栈的空间大小
  cout << "栈的大小为：" << stack.size() << endl;
}
int main()
{
  test01();
  return EXIT_SUCCESS;
}