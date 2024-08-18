#include <iostream>
using namespace std;
int fact (int x)
{
	int fc = 1;
	int i = x;
	while(i>0)
	{
		fc = fc * i;
		--i;
	}
	return fc;
}
int comb(int n,int r)
{
	int cb = 1;
	cb = fact(n)/(fact(r)*(fact(n-r)));
	return cb;
}
int main()
{
	cout << comb(5,2);
}
