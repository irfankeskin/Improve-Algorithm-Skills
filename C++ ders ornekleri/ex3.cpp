#include <iostream>
using namespace std;
void print(int size,char type)
{
	int i = 0;
	while(i < size)
	{
		cout << type;
		++i;
	}
}
int main()
{
	int size;
	cout << "Enter an odd number : ";
	cin >> size;
	int star = 0;
	int space = 0;
	int i = 0;
	while(i < size)
	{
		if(i < size / 2 + 1)
		{
			star = 2 * i + 1;
			space = size / 2 - i;
			print(space,' ');
			print(star,'*');
			cout <<endl; 
		}
		else
		{
			star = star - 2;
			space = space + 1;
			print(space,' ');
			print(star,'*');
			cout<<endl;
		}
		++i;
	}
	return 0;
}
