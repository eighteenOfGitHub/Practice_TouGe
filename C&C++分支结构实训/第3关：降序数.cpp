#include<iostream>
using namespace std;
int main()
{
	int x, a, b, c, d;
	cin >> x;
	a = x / 1000;
	d = x % 10;
	b = (x - a * 1000) / 100;
	c = (x - a * 1000 - b * 100) / 10;
	if (a <= b)cout << "No";
	else
		if (b <= c)cout << "No";
		else
			if (c <= d)cout << "No";
			else cout << "Yes";
	return 0;
}