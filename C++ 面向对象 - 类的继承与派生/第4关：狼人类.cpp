//第4关：狼人类
#include <string>
#include <iostream>
using namespace std;

/********* Begin *********/
class Wolf
{
    //狼类成员的声明与定义
public:
    string Name;
    int Shape;
    void PrintState() {
        cout << "姓名：" << Name
            << "，爪子锋利度为：" << Shape << endl;
    }
};

class Human
{
    //人类成员的声明与定义
public:
    string Name;
    int Intell;
    void PrintState() {
        cout << "姓名：" << Name
            << "，智力为：" << Intell << endl;
    }
};

class Werewolf: public Wolf, public Human
{
    //狼人类成员的声明与定义
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