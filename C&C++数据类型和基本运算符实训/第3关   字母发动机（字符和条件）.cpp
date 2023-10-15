// 包含两种I/O库，可以使用任一种输入输出方式
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	char ch;
	cin >> ch;
	ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : (ch - 32);
	cout << ch << endl;
	return 0;
}