//2022.11.16测试 18题 
#include<iostream>
using namespace std;

int main()
{
	int x = 3;
	do
	{
		cout<<x-=2<<endl;
	}while(!(--x));	
	return 0;
}

//"<<"的优先级大于"-=" 
