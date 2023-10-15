// 第2关：返回数值
#include <cstdio>
#include <iostream>
#include <cmath> 
using namespace std;

int digitR(int a,int b)
{
	int c=a/pow(10,b-1);
	return c%10;
}

int main()
{
	int a,b,c;
	cin>>a>>b;
	c=digitR(a,b);
	cout<<c;
	return 0;
} 
