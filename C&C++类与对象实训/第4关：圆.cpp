//��4�أ�Բ
#include<cstdio>
#include<iostream>
#include<iomanip>
using namespace std;
const double PI = 3.14;

class Point
{
public:
    //�޲ι��캯��
    Point(){};
    //�вι��캯��
    Point(double xx, double yy) { x = xx; y = yy; }
   //���õ㺯��
    void stePoint(double xx, double yy) { x = xx; y = yy; }
    //��ʾ�㺯��
    void showPoint() { cout << " (" <<setprecision(0)<< x << "," << setprecision(0) << y << ") "; }
private:
    double x, y;
};

class circle
{
public:
    static int num ;
    //�вκ�������
    circle(double r, Point centerp) { radius = r; p = centerp; num++; }
    //����Բ��
    void setcenter(Point pp) { p = pp; }
    //��ʾԲ��
    void showcenter(Point pp) { pp.showPoint(); }
    //�����
    void area()
    { 
        cout << setiosflags(ios::fixed);
        cout << setprecision(2) << radius * radius * PI<<endl;
    }
    //���ð뾶
    void setr(double rr) { radius = rr; }
    //��ʾ�뾶
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

    /* ����ɾ���������޷�ͨ�����Ե�*/
    {
        double a, b, r;
        cin >> r >> a >> b;
        Point p1(a,b);/*�����ĵ��������˲�ͬ�����޸�*/
        circle c1(r, p1);/*������Բ��������˲�ͬ�����޸�*/
        cout << "2" << endl;
        c1.showr();
        c1.showcenter(p1); /*������Բ����������ʾ��̬��Ա�����ľ�̬������˲�ͬ�����޸�*/
        c1.area();
        cout << c1.num << endl;
    }
    /*����ɾ���������޷�ͨ�����Ե�*/
    return 0;
}
