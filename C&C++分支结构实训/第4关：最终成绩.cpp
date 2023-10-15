#include<iostream>
using namespace std;
int main()
{
	int a, b, c,n;
	cin >> b >> n;
	switch (n)
	{
	case 1:c = 10; break;
	case 2:
	case 3:c = 5; break;
	}
	a = b + c;
	if (a >= 100)cout << "100";
	else cout << a;
	return 0;
}