#include <iostream>
using namespace std;
int refact(int x)
{
	if(x == 1)
	return 1;
	return x * refact(x-1);
}

int fact(int x)
{
	int sum = 1;
	int i = x;
	while(x > 0)
	{
		sum = sum * x;
		--x;
	}	
}
int main()
{
	cout <<"refact : "<< refact(4) << endl;
	cout <<"fact : "<< fact(5) << endl;
}
