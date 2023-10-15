//µÚ3¹Ø£ºÊ±ÖÓ
#include<iostream>
#include<cmath>
using namespace std;

class Clock
{

private:
	int hour, minute, second;
public:
	Clock(int newH=0, int newM=0, int newS=0)
	{
		hour = newH;
		minute = newM;
		second = newS;
	}
	void settime(int h, int m, int s)
	{
		hour = h;
		minute = m;
		second = s;
	}

	Clock(Clock& c)
	{
		hour = c.hour;
		minute = c.minute;
		second = c.second;
	}

	int gethour() { return hour; }
	int getminute() { return minute; }
	int getsecond() { return second; }

	void showtime();
	
	void interval(Clock c2);

};

void Clock::showtime()
{
	if (hour >= 10 && minute >= 10 && second >= 10)
		cout << gethour() << ":" << getminute() << ":" << getsecond() << endl;
	if (hour >= 10 && minute >= 10 && second < 10)
		cout << gethour() << ":" << getminute() << ":0" << getsecond() << endl;
	if (hour >= 10 && minute < 10 && second >= 10)
		cout << gethour() << ":0" << getminute() << ":" << getsecond() << endl;
	if (hour >= 10 && minute < 10 && second < 10)
		cout << gethour() << ":0" << getminute() << ":0" << getsecond() << endl;

	if (hour < 10 && minute >= 10 && second >= 10)
		cout << "0" << gethour() << ":" << getminute() << ":" << getsecond() << endl;
	if (hour < 10 && minute >= 10 && second < 10)
		cout << "0" << gethour() << ":" << getminute() << ":0" << getsecond() << endl;
	if (hour < 10 && minute < 10 && second >= 10)
		cout << "0" << gethour() << ":0" << getminute() << ":" << getsecond() << endl;
	if (hour < 10 && minute < 10 && second < 10)
		cout << "0" << gethour() << ":0" << getminute() << ":0" << getsecond() << endl;
}


void Clock::interval(Clock c2)
{
	int dhour = hour - c2.hour;
	int dminute = minute - c2.minute;
	int dsecond = second - c2.second;
	unsigned diffrence = fabs(dhour * 3600 + dminute * 60 + dsecond);
	cout << diffrence;
}
int main()
{
	int h1, m1, s1, h2, m2, s2;
	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	Clock c1(h1,m1,s1),c2(h2,m2,s2);
	c1.showtime();
	c1.interval(c2);
	return 0;
}
	