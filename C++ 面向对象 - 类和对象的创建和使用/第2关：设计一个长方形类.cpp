//第2关：设计一个长方形类
#include<iostream>
using namespace std;
class Rectangle
{
private:
    int height;
    int width;
public:
    Rectangle(int h, int w) :height(h), width(w) {};
    int GetArea() { return height * width; }
};

Rectangle GetRect(int h, int w)
{
    Rectangle r(h, w);
    return r;
}
int GetRectArea(Rectangle rect){return rect.GetArea();}

int main()
{
    int h, w;
    cin >> h >> w;
    Rectangle rec = GetRect(h, w);
    cout << "长方形的面积为：" << GetRectArea(rec) << endl;
}