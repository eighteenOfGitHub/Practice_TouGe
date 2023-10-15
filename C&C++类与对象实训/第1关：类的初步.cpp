//第1关：类的初步
#include<iostream>
using namespace std;

class Funcation
{
public:
	Funcation() { cout << "无参构造函数被调用" << endl; }
	Funcation(int f) { cout << "有参构造函数被调用" << endl; }
	Funcation(Funcation &f) { cout << "拷贝构造函数被调用" << endl; }
	~Funcation() { cout << "析构函数被调用" << endl; }

	void Fun1(int x);
	void Fun2(int x, int y);
	void Fun3(int x, int y);
	void Fun4(int x, int y);
	void Fun5(int x, int y);

private:
	int m_f;


};

void Funcation::Fun1(int x)
{
	Funcation f2(1);
	Funcation f3(f2);
}

//是否是完数
void Funcation::Fun2(int x,int y)
{
	int s = 0;
	if (y % 2 == 0)
	{
		for (int i = 1; i <= y / 2; i++)
		{
			if (y % i == 0) s += i;
		}
	}
	else
	{
		for(int j=1; 1 <= y / 3; j++)
		{
			if (y % j == 0) s += j;
		}
	}
	if (s == y)cout << "Yes"<<endl;
	else cout << "No" << endl;
}

//质数判断
void Funcation::Fun3(int x,int y)
{
	if (y == 2|| y == 3 || y == 5 || y == 7 )cout << "Yes" << endl;
	else if (y % 2 == 0) cout << "No" << endl;
	else
	{
		bool prime;
		for (int j = 3; j <= y / 3; j+=2)
		{
			prime = 1;
			if (y % j == 0) prime = 0;
		}
		if (prime == 1)cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}

//回文数判断
void Funcation::Fun4(int x,int y)
{
	int a, b;
	a = y;
	b = 0;
	for (; a > 0; a /= 10)
	{
		b = b * 10 + a % 10;
	}
	if (b == y)cout << "Yes" << endl;
	else cout << "No" << endl;
}

//位数计算
void Funcation::Fun5(int x,int y)
{
	int s=0;
	for (; y > 0; y /= 10)
	{
		s += 1;
	}
	cout << s << endl;
}



int main()
{
	int x,y;
	cin >> x;
	Funcation f;

	switch (x)
	{
	case 1: {f.Fun1(x); break; }
	case 2: {cin >> y; f.Fun2(x, y); break; }
	case 3: {cin >> y; f.Fun3(x, y); break; }
	case 4: {cin >> y; f.Fun4(x, y); break; }
	case 5: {cin >> y; f.Fun5(x, y); break; }
	}
	
	return 0;
}