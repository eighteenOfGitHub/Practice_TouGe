/*
�Ա�дһ�������û������������������һ��������� ֻ����+��-��*��/ �����ɼ��������������ĳ���
���������ǳ���("/")ʱ���������������Ľ������10/3=3�����ҵ�����Ϊ0ʱ�������Error!����
*/
#include<iostream>
using namespace std;
int main()
{
	int a, b,x;
	char c;
	scanf_s("%d %d\n%c", &a, &b, &c);
	/*
scanf()�����ڶ�ȡʱ�����߽磬���Կ��ܻ�����ڴ�й©����һ���İ�ȫ���������������

char a;
scanf("%c",&a);

scanfֻ��һ��%c�����������������ϵ��ַ�ʱ���ͻᷢ���ڴ������
΢��˾�����䲻��ȫ��������VS���������ṩ��scanf_s()����������VS���������еĺ�����ǿ���û�������ȫ��
�������:��scanf�ĳɣ�scanf_s
�����е�scanf()��д��scanf_s()��
����scanf_s()��VS���������еĺ�����д�˴˺���֮���ڱ�ı������Ͼ��޷�ִ�У�
ʹ�ô���Ŀ���ֲ�ԺͿ�ƽ̨�Ա�ü�����Ƽ�ʹ�á�
    */
	switch (c)
	{
	case '+':x = a + b; cout << x<< endl; break;
	case '-':x = a - b; cout << x << endl; break;
	case '*':x = a * b; cout << x << endl; break;
	case '/':
		if (b != 0)
		{
			x = a / b; cout << x << endl;
		}
		else cout << "Error!" << endl; 
		break;
	}
	return 0;
}