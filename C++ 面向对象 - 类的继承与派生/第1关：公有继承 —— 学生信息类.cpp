//��1�أ����м̳� ���� ѧ����Ϣ��
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
        cout << "������" << Name << endl;
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
    cout << "ѧ�ţ�" << SID << endl;
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
