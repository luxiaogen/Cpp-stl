#include <iostream>

using namespace std;

/*
 * 有三名同学（张三，李四，王五），在一次考试中的成绩分别如下表，请分别输出三名同学的总成绩
 */
int main()
{
  int scores[3][3] = {{100, 100, 100},
                      {90,  50,  100},
                      {60,  70,  80}};
  int sum = 0, row = sizeof(scores) / sizeof(scores[0]), col = sizeof(scores[0]) / sizeof(scores[0][0]);
  for (int i = 0; i < row; i++)
  {
    sum = 0;
    for (int j = 0; j < col; j ++)
    {
      sum += scores[i][j];
      cout << scores[i][j] << "\t";
    }
    cout << "第" << i + 1  << "人的总分为:" << sum << endl;

  }
  return 0;
}