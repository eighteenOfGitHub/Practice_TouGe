// 读入秒数，计算秒数对应的时分秒(如读入3700秒，输出1h 1min 40s
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int x, a, b, c;
	cin >> x;
	a = x / 3600;
	b = (x - a * 3600) / 60;
	c = x - a * 3600 - b * 60;
	cout << a << "h " << b << "min " << c << "s" << endl;
	return 0;
}