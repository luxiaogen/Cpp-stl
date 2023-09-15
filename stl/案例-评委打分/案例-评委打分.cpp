#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
/*
  有5名选手：选手ABCDE，
  10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。
*/
class Player
{
public:
  Player(string name, int score)
  {
    this->name = name;
    this->score = score;
  }
  string name; // 姓名
  int score; // 平均分
};
void createPlayers(vector<Player>&);
void setScoreAndAvg(vector<Player>&);
void showScore(vector<Player>&);
int main()
{
  // 创建5名选手
  vector<Player> players;
  createPlayers(players);

  // 测试
  /*for (vector<Player>::iterator it = players.begin(); it != players.end(); it ++)
    cout << "name :" << it->name << ",score:" << it->score << endl;*/
  // 计算平均分并存入
  setScoreAndAvg(players);

  // 展示选手信息
  showScore(players);
  return EXIT_SUCCESS;
}

void createPlayers(vector<Player> &players)
{
  string nameSeed = "ABCDE";
  for (int i = 0; i < 5; i ++)
  {
    string name = "选手";
    name += nameSeed[i];
    int score = 0;
    Player p(name, score);
    players.push_back(p);
  }
}

void setScoreAndAvg(vector<Player> &players)
{
  for (vector<Player>::iterator it = players.begin(); it != players.end(); it ++)
  {
    deque<int> deq;
    for (int i = 0; i < 10; i++)
    {
      // [60-100]
      int score = rand() % 41 + 60;
      deq.push_back(score);
    }

    // 升序排序
    sort(deq.begin(), deq.end());
    // 去掉一个最大数  最小数
    deq.pop_front();
    deq.pop_back();
    int sum = 0;
    for (int i = 0; i < deq.size(); i++)
    {
      sum += deq[i];
    }
    int avg = sum / deq.size();
    it->score = avg;
  }
}


void showScore(vector<Player> &palyers)
{
  for (vector<Player>::iterator it = palyers.begin(); it != palyers.end(); it++)
  {
    cout << "姓名： " << it->name << " 平均分： " << it->score << endl;
  }
}