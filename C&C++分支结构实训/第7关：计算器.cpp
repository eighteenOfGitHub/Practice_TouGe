/*
试编写一个根据用户输入的两个操作数和一个运算符（ 只包含+、-、*、/ ），由计算机输出运算结果的程序。
当操作数是除号("/")时，运算结果是整除的结果，如10/3=3；并且当除数为0时，输出“Error!”。
*/
#include<iostream>
using namespace std;
int main()
{
	int a, b,x;
	char c;
	scanf_s("%d %d\n%c", &a, &b, &c);
	/*
scanf()函数在读取时不检查边界，所以可能会造成内存泄漏。有一定的安全隐患。例如代码是

char a;
scanf("%c",&a);

scanf只有一个%c，当你输入两个以上的字符时，就会发生内存溢出。
微软公司觉得其不安全，所以在VS编译器中提供了scanf_s()函数，这是VS编译器特有的函数。强制用户提升安全性
解决方案:把scanf改成：scanf_s
把所有的scanf()改写成scanf_s()，
但是scanf_s()是VS编译器特有的函数，写了此函数之后在别的编译器上就无法执行，
使得代码的可移植性和跨平台性变得极差，不推荐使用。
    */
	switch (c)
	{
	case '+':x = a + b; cout << x<< endl; break;
	case '-':x = a - b; cout << x << endl; break;
	case '*':x = a * b; cout << x << endl; break;
	case '/':
		if (b != 0)
		{
			x = a / b; cout << x << endl;
		}
		else cout << "Error!" << endl; 
		break;
	}
	return 0;
}