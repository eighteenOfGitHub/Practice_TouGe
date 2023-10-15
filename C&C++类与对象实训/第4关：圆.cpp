//第4关：圆
#include<cstdio>
#include<iostream>
#include<iomanip>
using namespace std;
const double PI = 3.14;

class Point
{
public:
    //无参构造函数
    Point(){};
    //有参构造函数
    Point(double xx, double yy) { x = xx; y = yy; }
   //设置点函数
    void stePoint(double xx, double yy) { x = xx; y = yy; }
    //显示点函数
    void showPoint() { cout << " (" <<setprecision(0)<< x << "," << setprecision(0) << y << ") "; }
private:
    double x, y;
};

class circle
{
public:
    static int num ;
    //有参函数构造
    circle(double r, Point centerp) { radius = r; p = centerp; num++; }
    //设置圆心
    void setcenter(Point pp) { p = pp; }
    //显示圆心
    void showcenter(Point pp) { pp.showPoint(); }
    //求面积
    void area()
    { 
        cout << setiosflags(ios::fixed);
        cout << setprecision(2) << radius * radius * PI<<endl;
    }
    //设置半径
    void setr(double rr) { radius = rr; }
    //显示半径
    void showr() 
    { 
        cout << setiosflags(ios::fixed);
        cout<<setprecision(2)<<radius;
    }
   
private:
    double radius;
    Point p;
};

int circle::num = 0;

int main() {

    /* 请勿删除，否则无法通过测试点*/
    {
        double a, b, r;
        cin >> r >> a >> b;
        Point p1(a,b);/*如果你的点的类名与此不同，请修改*/
        circle c1(r, p1);/*如果你的圆的类名与此不同，请修改*/
        cout << "2" << endl;
        c1.showr();
        c1.showcenter(p1); /*如果你的圆的类名或显示静态成员变量的静态函数与此不同，请修改*/
        c1.area();
        cout << c1.num << endl;
    }
    /*请勿删除，否则无法通过测试点*/
    return 0;
}
