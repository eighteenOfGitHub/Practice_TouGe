// ��������I/O�⣬����ʹ����һ�����������ʽ
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