#include<cstdio>
#include <iostream>
using namespace std;

bool isOddDigit(int a)
{
if(a==0)return 0;
for(;a>0;a/=10)
{
	if(a%2==0) return 0;
}
return 1;
}

int main()
{
	int a;
	cin>>a;
	bool b;
	b=isOddDigit(a);
	if(b==0) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
	return 0;
} 
