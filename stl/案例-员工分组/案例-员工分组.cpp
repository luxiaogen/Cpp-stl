#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <ctime>
using namespace std;
#define CEHUA 0
#define MEISHU 1
#define YANFA 2
/*
- 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
- 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
- 随机给10名员工分配部门和工资
- 通过multimap进行信息的插入  key(部门编号) value(员工)
- 分部门显示员工信息
*/
class Worker
{
public:
  Worker(string name, int salary)
  {
    this->name = name;
    this->salary = salary;
  }
  string name; // 姓名
  int salary; // 工资
};
void createWorkers(vector<Worker> &);
void setGroup(vector<Worker>&,multimap<int,Worker> &);
void showWorkersGroup(multimap<int, Worker> &);


int main()
{
  // srand((unsigned int) time(NULL));
  // 1、创建员工
  vector<Worker> v_workers;
  createWorkers(v_workers);
  // 2、员工分组
  multimap<int,Worker> m_workers;
  setGroup(v_workers,m_workers);
  // 3、分组显示员工
  showWorkersGroup(m_workers);
  return EXIT_SUCCESS;
}

void createWorkers(vector<Worker> &v_workers)
{
  string nameSeed = "ABCDEFGHIJ";
  for (int i = 0; i < 10; i++)
  {
    string name = "员工";
    name += nameSeed[i];
    Worker worker(name, rand() % 10000 + 10000); // 10000 ~ 19999
    v_workers.push_back(worker);
  }
}

void setGroup(vector<Worker> &v_workers,multimap<int,Worker> &m_workers)
{
  int deptId = 0;
  for (vector<Worker>::iterator it = v_workers.begin(); it != v_workers.end(); it ++ )
  {
    deptId = rand() % 3; // 0 1 2
    m_workers.insert(make_pair(deptId, *it));
  }
}
void showWorkersGroup(multimap<int, Worker> &m_workers)
{
  //
  cout << "策划部门" << endl;
  cout << "------------------" << endl;
  multimap<int, Worker>::iterator pos = m_workers.find(CEHUA);
  int count = m_workers.count(CEHUA), index = 0;
  for (; pos != m_workers.end() && index < count; pos++, index ++)
    cout << "姓名：" << pos->second.name << ",工资:" << pos->second.salary << endl;
  cout << "美术部门" << endl;
  cout << "------------------" << endl;
  pos = m_workers.find(MEISHU);
  count = m_workers.count(MEISHU);
  index = 0;
  for (; pos != m_workers.end() && index < count; pos++, index ++)
    cout << "姓名：" << pos->second.name << ",工资:" << pos->second.salary << endl;

  cout << "研发部门" << endl;
  cout << "------------------" << endl;
  pos = m_workers.find(YANFA);
  count = m_workers.count(YANFA);
  index = 0;
  for (; pos != m_workers.end() && index < count; pos++, index ++)
    cout << "姓名：" << pos->second.name << ",工资:" << pos->second.salary << endl;
}
