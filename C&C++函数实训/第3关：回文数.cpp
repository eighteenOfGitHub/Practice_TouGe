// 第3关：回文数
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;


bool isPalindromes(int n)
{
    int m,x;
    m=0;
    x=n;
    while(x>0)
    {
    	m=x%10+m*10;
    	x/=10;
	}
	return (m==n)?1:0;
}

void printfPalindromes()
{
    int j=1;
	for(int i=0;i<=1000;i++)
    {
    	bool x=isPalindromes(i);
    	if(x==1)
    	{
    		cout<<i<<" ";
    		j++;
		}
		while(j==11)
		{
		j=1;
		cout<<endl;	
		}
	}
}

int main()
{
    int n,t;
    cin>>t>>n;
    if(t==5) printfPalindromes();
    else 
	{
    	if(isPalindromes(n)==1) cout<<"Yes";
    	else cout<<"No";
	}
    return 0;
}

