#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int t, n,x=398;
	float y;
	cin >> t >> n;
	switch (t)
	{
	case 7:
	case 8:
	case 9:
		if (n >= 20)y = n * x * 0.7;
		else y = n * x * 0.85;
		break;
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 10:
	case 11:
	case 12:
		if (n >= 20)y = n * x * 0.5;
		else y = n * x * 0.7;
		break;
	}
	printf("%.2lf", y);
	return 0;
}
//ĳ���ݷ���ı�׼�۸�Ϊ398Ԫ/�죬
//��������7��9�·ݣ���20����������(��20��)���Ŷ��Ż�30%������20������Ŷ��Ż�15%��
//�ڵ�����20��������(��20��)���Ŷ��Ż�50%������20������Ŷ��Ż�30%��
///��д���������·ݺ�Ԥ�������������ÿ��Ӧ���ܽ�

