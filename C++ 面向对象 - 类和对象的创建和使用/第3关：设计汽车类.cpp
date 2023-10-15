//��3�أ����������
#include <iostream>
using namespace std;

//�ڴ˴�ʵ��һ��������
class Car
{
private:
    bool door;
    bool light;
    double speed;
public:
   //Ĭ�Ϲ���
    Car() {
        door = 0;
        light = 0;
        speed = 0;
    }
    //�򿪳���
    void opendoor() { door = 1; }
    //�رճ���
    void closedoor() { door = 0; }
    //�򿪳���
    void openlight() { light = 1; }
    //�رճ���
    void closelight() { light = 0; }
    //����
    void speed_up() { speed += 10; }
    //����
    void speed_down(){ speed -= 10;}

    //�������
    bool getdoor() { return door; }
    bool getlight() { return light; }
    double getspeed() { return speed; }
};

//�ж�״̬����ʾ״̬���ܺ���
void cout_door(Car a)
{
    if (a.getdoor()) cout << "���� ON" << endl;
    else cout << "���� OFF" << endl;
    
}
void cout_light(Car a)
{
    if (a.getlight()) cout << "���� ON" << endl;
    else cout << "���� OFF" << endl;
 
}
void cout_speed(Car a)
{
    cout << "�ٶ� "<< a.getspeed() << endl;
}

void function(Car &object,char option)
{
    switch (option)
    {
    case '1': {object.opendoor(); break; }
    case '2': {object.closedoor(); break; }
    case '3': {object.openlight(); break; }
    case '4': {object.closelight(); break; }
    case '5': {object.speed_up(); break; }
    case '6': {object.speed_down(); break; }
    }
}

int main()
{
    Car a;
    char cmds[25]{};
    cin >> cmds;
    //�����䣬������
    for (int i = 0; cmds[i] != '\0'; i++)
    {
        function(a,cmds[i]);
    }
    //��ʾ����״̬
    cout_door(a);
    cout_light(a);
    cout_speed(a);

    return 0;
}