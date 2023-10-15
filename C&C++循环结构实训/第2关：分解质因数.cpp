#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n, i = 1;
	cin >> n; cout << "1 ";
	if (n % 2 == 0) {
		for (int m = 2; m <= (n / 2); m++)
		{
			int a = n % m;
			if (a == 0) { cout << m << " "; }
		}

		cout << n;
	}
	else {
		for (int m = 3; m <= (n / 3); m++)
		{
			int a = n % m;
			if (a == 0) { cout << m << " "; }
		}
		cout << n;
	}
	return 0;
}
