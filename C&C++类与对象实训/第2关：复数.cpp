#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class Complex
{
public:
	Complex(double x, double y)
	{
		m_x = x;
		m_y = y;
	}

    //��c1��c2��ӱ�����c1��
	void add(Complex c2)
	{
		m_x += c2.m_x;
	}
    
	//��c1���
	 void show()
	{
		cout << setiosflags(ios::fixed);
		//0
		if (m_x == 0 && m_y == 0)cout << "0";
		//ʵ��Ϊ��
		else if (m_x == 0)
		{
			if (m_y == 1)cout << "i" << endl;
			else if (m_y == -1)cout << "-i" << endl;
			else cout << setprecision(1) << m_y << "i" << endl;
		}
		//ʵ����Ϊ��
		else
		{
		    //�鲿������
		    if (m_y > 0)
			{
				if (m_y == 1)cout << setprecision(1) << m_x << "+i" << endl;
				else cout << setprecision(1) << m_x <<"+"<< setprecision(1) << m_y << "i" << endl;
		    }
		    //�鲿С����
			else if (m_y < 0)
			{
				if (m_y == -1)cout << setprecision(1) << m_x << "-i" << endl;
				else cout << setprecision(1) << m_x << setprecision(1) << m_y << "i" << endl;
			}
		    //�鲿Ϊ��
			else
			{
				cout << setprecision(1) << m_x;
			}	
		}
	}

private:
	double m_x, m_y;

};

int main()
{
	double x, y, a;
	cin >> x >> y >> a;
	Complex c1(x, y);
	Complex c2(a, 0);
	c1.add(c2);
	c1.show();
	return 0;
}