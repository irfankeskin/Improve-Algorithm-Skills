#include <iostream>
using namespace std;
bool asal(int x)
{
	for(int i = 2;i < x;i++)
	{
		if(x % i == 0)
		return false;
	}
	if(x < 2)
	return false;
	return true;
}
int mersenne (int t,int u)
{
	if(u == 0)
	return 1;
	return t * mersenne(t,u-1);
}
int main()
{
	int temp = 0;
	int num = 1;
	for(int i=1;i<=7;)
	{
			temp = mersenne(2,num)-1;
			if(asal(temp))
			{
				cout << i << ". mersenne asali : " << temp << endl;
				++i;
			}
			++num;
	}
	return 0;
}
