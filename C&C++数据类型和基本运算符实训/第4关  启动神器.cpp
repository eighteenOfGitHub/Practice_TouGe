// ����3������a��b��c���������ǵ�ֵ��ʹa���b��ֵ��b���c��ֵ��c���a��ֵ��
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c;
	d = a;
	a = b;
	b = c;
	c = d;
	cout << a << b << c;
	return 0;
}