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

    //将c1和c2相加保存在c1中
	void add(Complex c2)
	{
		m_x += c2.m_x;
	}
    
	//将c1输出
	 void show()
	{
		cout << setiosflags(ios::fixed);
		//0
		if (m_x == 0 && m_y == 0)cout << "0";
		//实部为零
		else if (m_x == 0)
		{
			if (m_y == 1)cout << "i" << endl;
			else if (m_y == -1)cout << "-i" << endl;
			else cout << setprecision(1) << m_y << "i" << endl;
		}
		//实部不为零
		else
		{
		    //虚部大于零
		    if (m_y > 0)
			{
				if (m_y == 1)cout << setprecision(1) << m_x << "+i" << endl;
				else cout << setprecision(1) << m_x <<"+"<< setprecision(1) << m_y << "i" << endl;
		    }
		    //虚部小于零
			else if (m_y < 0)
			{
				if (m_y == -1)cout << setprecision(1) << m_x << "-i" << endl;
				else cout << setprecision(1) << m_x << setprecision(1) << m_y << "i" << endl;
			}
		    //虚部为零
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