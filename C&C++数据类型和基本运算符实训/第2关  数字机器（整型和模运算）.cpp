// 包含两种I/O库，可以使用任一种输入输出方式
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