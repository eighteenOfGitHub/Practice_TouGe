//第3关：研究生信息类
#include<string>
#include<iostream>
using namespace std;

class People
{
public:
	string Name;
	void PrintName();
};

void People::PrintName()
{
	cout << "姓名：" << Name << endl;
}
/********* Begin *********/
//私有继承 People 类
class Student:private People
{
public:
    int SID;
    void PrintSID();
    //添加一个 Set 函数来设置父类的 Name 成员
    void SetName(string name) { Name = name; }
};
/********* End *********/

void Student::PrintSID()
{
    /********* Begin *********/
    //输出学号 SID
    cout << "学号：" << SID << endl;
    /********* End *********/
}

/********* Begin *********/
// 公有继承 Student 类
class Graduate:public Student
{
public:
    int ResearchID;
    void PrintResearchID();
    //添加一个 Set 函数来设置父类的 SID 成员
    void SetSID(int i) { SID = i; }
    //添加一个 Set 函数来调用父类的 SetName 函数
    void Set(string name) { SetName(name); }
};

/********* End *********/

void Graduate::PrintResearchID()
{
    /********* Begin *********/
    //输出研究方向 ResearchID
    cout << "研究方向：" << ResearchID << endl;
    /********* End *********/
}

void Set(string name, int sid, int rid, Graduate* ptr)
{
    /********* Begin *********/
    //设置 ptr 所指对象的三个成员
    ptr->SetName(name);
    ptr->SetSID(sid);
    ptr->ResearchID = rid;
    /********* End *********/
}

int main()
{
    int i, j;
    string name;
    cin >> i >> j >> name;
    Graduate st;
    Set(name, i, j, &st);
    ((Student*)&st)->PrintSID();
    ((People*)&st)->PrintName();
    st.PrintResearchID();
    return 0;
}
