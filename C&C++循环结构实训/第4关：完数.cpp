//���1000�ڵ�������������ָ������(��������)֮���뱾����ȵ�������6�������� 6 = 1 + 2 + 3
#include<iostream>
using namespace std;
int main()
{
	for (int i = 6; i <= 1000; i++)
	{
		int b=0;
		for (int j = 1; j <= i / 2; j++)
		{
			 if(i%j==0)b+= j;
		}
		if (i == b)cout << i<<" ";
    }
	return 0;
}