#include <iostream>
using namespace std;
bool check (int x)
{
	int temp = x;
	int reverse = 0;
	for(int i = x; x > 0;)
	{
		reverse = reverse * 10;
		reverse += x % 10;
		x = x / 10;
	}
	if(temp == reverse)
	return true;
	return false;
}
int main()
{
	int maxpol = 0;
	int control = 0;
	for(int i = 100;i < 1000;i++)
	{
		for(int j = i; j < 1000;j++)
		{
			control = i * j;
			if(check(control) == true && control > maxpol)
			maxpol = control;
		}
	}
	cout << "En buyuk palindrome : " << maxpol << endl;
}
