// 第4关：简单的自然数
#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int numberDigit(int x)
{
	int i=0;
	while(x>0)
	{
         i++;
         x/=10;
	}
	return i;
}

int changeNumber(int x,int y)
{
	int m,n;
	m=x/10;
	n=m+8*pow(10,y-1);
	return n;
} 

int main(){
    int x=18;
    while(x){
    	int z,y;
    	y=numberDigit(x);
    	z=changeNumber(x,y);
    	if(z==(x<<2)){
    		cout<<x;
    		return 0;
		}
		x+=10;
	}
	return 0;
}
