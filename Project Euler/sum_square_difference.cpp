#include <iostream>
using namespace std;
int main()
{
	int sum1 = 0;
	int sum2 = 0;
	for(int i = 1;i <= 100;i++)
	{
		sum1 = sum1 + (i * i);
	}
	for(int j = 1;j <= 100;j++)
	{
		sum2 = sum2 + j;	
	}
	sum2 = sum2 * sum2;
	cout << sum2 -sum1 << endl;
}
