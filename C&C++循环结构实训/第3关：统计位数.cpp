#include<iostream>
using namespace std;
int main()
{
	int a, b=0;
	cin >> a;
	do
	{
		b += 1;
		a /= 10;
	} while (a != 0);
	cout << b;
	return 0;
}