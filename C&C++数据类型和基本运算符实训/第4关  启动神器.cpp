// 读入3个整数a，b，c，交换他们的值，使a存放b的值，b存放c的值，c存放a的值。
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