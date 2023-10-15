//第3关：设计汽车类
#include <iostream>
using namespace std;

//在此处实现一个汽车类
class Car
{
private:
    bool door;
    bool light;
    double speed;
public:
   //默认构造
    Car() {
        door = 0;
        light = 0;
        speed = 0;
    }
    //打开车门
    void opendoor() { door = 1; }
    //关闭车门
    void closedoor() { door = 0; }
    //打开车灯
    void openlight() { light = 1; }
    //关闭车灯
    void closelight() { light = 0; }
    //加速
    void speed_up() { speed += 10; }
    //减速
    void speed_down(){ speed -= 10;}

    //获得数据
    bool getdoor() { return door; }
    bool getlight() { return light; }
    double getspeed() { return speed; }
};

//判断状态并显示状态功能函数
void cout_door(Car a)
{
    if (a.getdoor()) cout << "车门 ON" << endl;
    else cout << "车门 OFF" << endl;
    
}
void cout_light(Car a)
{
    if (a.getlight()) cout << "车灯 ON" << endl;
    else cout << "车灯 OFF" << endl;
 
}
void cout_speed(Car a)
{
    cout << "速度 "<< a.getspeed() << endl;
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
    //解读语句，并操作
    for (int i = 0; cmds[i] != '\0'; i++)
    {
        function(a,cmds[i]);
    }
    //显示汽车状态
    cout_door(a);
    cout_light(a);
    cout_speed(a);

    return 0;
}