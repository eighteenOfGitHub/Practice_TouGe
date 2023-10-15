#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int dfs(int x)
{
	int m=0;
	int n;
	while(x>0)
	{
		n=x%10;
		m+=n;
		x/=10;
	}
	return m;
}
int main()
{
    int n;
    cin>>n;
    cout<<dfs(n);
    return 0;
}
