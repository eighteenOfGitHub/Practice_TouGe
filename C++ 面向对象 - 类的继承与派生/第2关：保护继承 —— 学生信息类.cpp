//��2�أ������̳� ���� ѧ����Ϣ��
#include <string>
#include <iostream>
using namespace std;

class People
{
public:
    string Name;
    void PrintName();
};

void People::PrintName()
{
    cout << "������" << Name << endl;
}

class Student:protected People 
{
public:
    int SID;
    void PrintSID();
    void Set(string name){Name = name;}
};

void Student::PrintSID()
{
    cout << "ѧ�ţ�" << SID << endl;
}

void Set(int sid, string name, Student* ptr)
{
    ptr->Set(name);
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
    ((People*)&st)->PrintName();
}
