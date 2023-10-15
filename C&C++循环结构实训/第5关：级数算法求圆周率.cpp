//第5关：级数算法求圆周率

/*
用级数算法求圆周率PI的近似值。PI = 4*(1-1/3+1/5-1/7+1/9-……)
数值精确的某项级数的绝对值不大于1e-8（即1*10的-8次方）最终结果保留6位小数。
*/
#include<iostream>
using namespace std;
int main()
{
	double pi = 0;
	double n;
	n = 1;
	int b = 1;
	while (n >= 1e-8)
	{
		pi = (b % 4 == 1) ? pi + n : pi - n;
		b += 2;
		n = 1.0 / b;
	}
	pi = pi*4.0;
	printf("pi=%.6lf", pi);
	return 0;
}
