//��7�أ�a��n�򵥼ӷ���
//��������������a��n����a + aa + aaa + aaaa + a��a(n��)֮�͡�
//��������2, 3������2 + 22 + 222֮�ͣ����246��
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