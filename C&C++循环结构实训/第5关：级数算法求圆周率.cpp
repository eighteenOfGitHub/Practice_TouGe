//��5�أ������㷨��Բ����

/*
�ü����㷨��Բ����PI�Ľ���ֵ��PI = 4*(1-1/3+1/5-1/7+1/9-����)
��ֵ��ȷ��ĳ����ľ���ֵ������1e-8����1*10��-8�η������ս������6λС����
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
