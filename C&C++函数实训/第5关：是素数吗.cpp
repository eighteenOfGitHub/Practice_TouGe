//第5关：是素数吗
#include <stdio.h>
#include <iostream>
using namespace std;
bool primenumber(int n)
{
    if(n==2||n==3)return 1;
    else if(n%2==0)return 0;
    else 
    {
    	for(int i=3;i<=n/3;i++)
    	{
    		if(n%i==0)return 0;
	    }
	    return 1;
	}
}

int main()
{
    int n;
    cin >> n;
    bool x=primenumber(n);
    if(x==1)cout<<"Yes";
    else cout<<"No";
    return 0;
}
