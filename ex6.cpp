#include <iostream>
using namespace std;
int ust (int x,int u)
{
	//ITERATÝVE
	
	/*int sum = 1;
	int i = 0;
	while(i < u)
	{
		sum = sum * x;
		++i;
	}
	return sum;*/

	if(u == 0)
	return 1;
	return x * ust(2,u-1); 
}
int main()
{
	cout << "Enter a number : ";
	int n;
	cin >> n;
	int i = 1;
	while(i <= n)
	{
		cout << ust(2,i)-1<< endl;
		++i;
	}
	return 0;
}
