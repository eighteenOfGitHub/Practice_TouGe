//��3�أ��о�����Ϣ��
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
	cout << "������" << Name << endl;
}
/********* Begin *********/
//˽�м̳� People ��
class Student:private People
{
public:
    int SID;
    void PrintSID();
    //���һ�� Set ���������ø���� Name ��Ա
    void SetName(string name) { Name = name; }
};
/********* End *********/

void Student::PrintSID()
{
    /********* Begin *********/
    //���ѧ�� SID
    cout << "ѧ�ţ�" << SID << endl;
    /********* End *********/
}

/********* Begin *********/
// ���м̳� Student ��
class Graduate:public Student
{
public:
    int ResearchID;
    void PrintResearchID();
    //���һ�� Set ���������ø���� SID ��Ա
    void SetSID(int i) { SID = i; }
    //���һ�� Set ���������ø���� SetName ����
    void Set(string name) { SetName(name); }
};

/********* End *********/

void Graduate::PrintResearchID()
{
    /********* Begin *********/
    //����о����� ResearchID
    cout << "�о�����" << ResearchID << endl;
    /********* End *********/
}

void Set(string name, int sid, int rid, Graduate* ptr)
{
    /********* Begin *********/
    //���� ptr ��ָ�����������Ա
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
