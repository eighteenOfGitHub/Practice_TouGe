//2022.11.16测试 17题 
#include<iostream>
using namespace std;

int main()
{
	int s1=0 , s2=0 , s3=0 , s4=0;
	for(int t = 1; t <= 4; t++)
	switch (t)
	{
		case t>=4: s1++; break;  
		case t>=3: s2++; break;
		case t>=2: s3++; break;
		default : s4++;
	}
	cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<endl;
	
	return 0;
}

//case后面得是常量表达式 ，故无法运行 
