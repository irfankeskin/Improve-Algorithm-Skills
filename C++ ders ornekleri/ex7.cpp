#include <iostream>

using namespace std;

bool asal_control(int x)
{
	int i = 2;
	while(i < x)
	{
		if(x % i == 0)
		return false;
		++i;
	}
	return true;
}
int main()
{
	cout << "Enter a number : " ;
	int n;
	cin >> n;
	int i = 2;
 	int counter = 1;
 	while(counter <= n)
 	{
 		if(asal_control(i))
 		{
 			cout << counter <<". asal sayi : " << i << endl;
 			++counter;
		}
		++i;
	}
	return 0;
}
