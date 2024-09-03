#include <iostream>
using namespace std;
bool check_asal(int x)
{
	for(int i = 2;i < x;i++)
	{
		if(x % i == 0)
		return false;
	}
	return true;
}
int ft_asal(int y)
{
	int counter = 1;
	int i;
	int temp;
	for(i = 2;counter <= y;i++)
	{
		if(check_asal(i))
		{
			counter = counter + 1;
			temp = i;
		}
	}
	return temp;
}
int main()
{
	cout <<"10001 : "<< ft_asal(10001) << endl;
}
