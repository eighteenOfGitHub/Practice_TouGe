//2022.11.16测试 14题 
#include<iostream>
using namespace std;

int main()
{
	int x = 10,y = 10,i;
	for(i = 0; x>8; y=++i)cout<<x--<<" "<<y<<" ";
	return 0;
}

//输出结果：10 10 9 1
//因为先执行循环体，再执行表达式二

//for(初始语句;表达式一;表达式二)
//{
//	语句 
//} 
