//��2�أ����һ����������
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
    cout << "�����ε����Ϊ��" << GetRectArea(rec) << endl;
}