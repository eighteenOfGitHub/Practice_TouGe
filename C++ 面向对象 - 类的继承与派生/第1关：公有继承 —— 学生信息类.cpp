//第1关：公有继承 —— 学生信息类
#include<string>
#include <string>
#include<iostream>
using namespace std;

class People
{
public:
    string Name;
    void PrintName()
    {
        cout << "姓名：" << Name << endl;
    }
};

class Student:public People
{
public:
    int SID;
    void PrintSID();
};

void Student::PrintSID()
{
    cout << "学号：" << SID << endl;
}

void Set(int sid, string name, Student* ptr)
{
    ptr->Name = name;
    ptr->SID = sid;
}

int main()
{
    int id;
    string name;
    cin >> id >> name;
    Student st;
    Set(id, name, &st);
    st.PrintSID();
    st.PrintName();
}
