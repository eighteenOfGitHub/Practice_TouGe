// 包含两种I/O库，可以使用任一种输入输出方式
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const double pi = 3.14;
	double r, s, v,h;
	cin >> r >> h;
	s = 2 * pi * r*(r + h);
	v = pi * h * r * r;
	printf("%.2lf% .2lf", s, v);
	return 0;
}
/*
设圆柱体的半径和高分别为r和h，则圆柱体的表面积S = 2πr(r + h),
圆柱体的体积V = πhr²
*/