//输出100—1000之间能被3整除或个位是3的整数，每行输出10个。（用while
#include<iostream>
using namespace std;
int main()
{
	int i = 100;
	int j = 1;
	while (i <= 1000)
	{
		if (i % 3 == 0 || i % 10 == 3)
		{
			printf("%d", i);
			while (j % 10 == 0) 
			{ 
				cout << endl; 
				goto next_; 
			}
			printf(" ");
		next_:j++;
		}
		i++;
	}
	return 0;
}