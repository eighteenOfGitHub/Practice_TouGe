//输入一个整数，判断它能否被3、5、7整除。
// 若能同时被3个数整除输出a;
//若能同时被2个数整除，输出b并输出那两个数（从小到大）；
//若能被1个数整除，输出c并输出那个数；
//若不能被3个数整除，输出d。
#include<iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	if (x % 3 == 0 && x % 5 == 0 && x % 7 == 0)cout << "a";
	else if (x % 3 == 0 && x % 5 == 0)cout << "b\n3 5" << endl;
	else if (x % 3 == 0 && x % 7 == 0)cout << "b\n3 7" << endl;
	else if (x % 5 == 0 && x % 7 == 0)cout << "b\n5 7" << endl;
	else if (x % 3 == 0)cout << "c\n3" << endl;
	else if (x % 5 == 0)cout << "c\n5" << endl;
	else if (x % 7 == 0)cout << "c\n7" << endl;
	else if (x % 3 != 0 && x % 5 != 0 && x % 7 != 0)cout << "d";
	return 0;
}