//µÚ6¹Ø£ºÄæĞòÊı
#include<iostream>
using namespace std;
int main()
{
	int a, b=0;
	cin >> a;
	while (a > 0)
	{
		b = a % 10 + b * 10;
		a /= 10;
	}
	cout << b << endl;
	return 0; 
}