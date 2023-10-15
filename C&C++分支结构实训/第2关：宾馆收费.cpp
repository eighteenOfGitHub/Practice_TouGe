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
//某宾馆房间的标准价格为398元/天，
//在旺季（7—9月份），20个房间以上(含20间)的团队优惠30%；不足20房间的团队优惠15%；
//在淡季，20房间以上(含20间)的团队优惠50%；不足20房间的团队优惠30%；
///编写程序，输入月份和预定房间数，输出每天应收总金额。

