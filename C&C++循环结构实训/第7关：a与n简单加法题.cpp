//第7关：a与n简单加法题
//输入两个正整数a和n，求a + aa + aaa + aaaa + a…a(n个)之和。
//（如输入2, 3，计算2 + 22 + 222之和，输出246）
#include<iostream>
using namespace std;
int main()
{
	int a,n,c,z;
	z = 0;
	cin >> a >> n;
	c = a;
	for (int i=1; i <= n; i++) 
	{
		z += c;
		c = c * 10 + a;
	}
	cout << z << endl;
	return 0;
}