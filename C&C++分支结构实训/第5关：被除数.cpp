//����һ���������ж����ܷ�3��5��7������
// ����ͬʱ��3�����������a;
//����ͬʱ��2�������������b�����������������С���󣩣�
//���ܱ�1�������������c������Ǹ�����
//�����ܱ�3�������������d��
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