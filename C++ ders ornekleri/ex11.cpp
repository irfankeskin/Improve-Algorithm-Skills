#include <iostream>
using namespace std;
bool asal(int x)
{
	int i;
	for(i = 2;i < x;i++)
	{
		if(x % i == 0)
		return 0;
	}
	return true;
}
int main()
{
	int n;
	cout << "Kacinci asal : ";
	cin >> n;
	cout << n << ". asal sayi : " ;
	int i;
	int counter = 1;
	for(i=2;counter <= n;i++)
	{
		if(asal(i))
		{
			counter = counter + 1;
		}
	}
	cout << i-1;
}
