//��4�أ�������
#include <string>
#include <iostream>
using namespace std;

/********* Begin *********/
class Wolf
{
    //�����Ա�������붨��
public:
    string Name;
    int Shape;
    void PrintState() {
        cout << "������" << Name
            << "��צ�ӷ�����Ϊ��" << Shape << endl;
    }
};

class Human
{
    //�����Ա�������붨��
public:
    string Name;
    int Intell;
    void PrintState() {
        cout << "������" << Name
            << "������Ϊ��" << Intell << endl;
    }
};

class Werewolf: public Wolf, public Human
{
    //�������Ա�������붨��
public:
    void SetName(string &name)
    {
        Human::Name = name;
        Wolf::Name = name;
    }
    void SetState(int shape, int intell)
    {
        Shape = shape;
        Intell = intell;
    }
    void PrintAllState()
    {
        Wolf::PrintState();
        Human::PrintState();
    }
};

/********* End *********/
int main()
{
    int i, j;
    string name;
    cin >> i >> j >> name;
    Werewolf ww;
    ww.SetName(name);
    ww.SetState(i, j);
    ww.PrintAllState();
}