// ��������I/O�⣬����ʹ����һ�����������ʽ
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int x, a, b, c;
	cin >> x;
	c = x % 10;
	a = x / 100;
	b = x / 10 - a * 10;
	cout << a + b + c << endl;
	return 0;
}