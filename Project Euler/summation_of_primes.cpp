#include <iostream>
#include <cmath>
using namespace std;
bool prime(unsigned long long int x)
{
	if(x <= 1)
	return false;
	if(x == 2)
	return true;
	if(x % 2 == 0)
	return false;
	for(unsigned long long int i = 3;i <= sqrt(x);i += 2)
	{
		if(x % i == 0)
		return false;
	}
	return true;
}
int main()
{
	unsigned long long int sum = 0;
	int i = 2;
	while(i < 2000000)
	{
		if(prime(i))
		{
			sum += i;
		}
		++i;		
	}
	cout << sum << endl;
}
