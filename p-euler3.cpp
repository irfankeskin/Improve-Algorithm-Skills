#include <iostream>
using namespace std;
bool asal(long long x)
{
	for(long long i = 2;i < x;i++)
	{
		if(x % i == 0)
		return false;
	}
	return true;
}
int main()
{
	for(long long i = 2;i < 1000000;i++)
	{
		if(asal(i))
		{
			if(600851475143 % i == 0)
			cout << i << " ";
		}
	}
}
