#include <iostream>
using namespace	std;
int	main()
{
	int i = 2;
	for(int j = 2;j <= 20;)
	{
			if(i % j == 0)
			{
				j++;
			}
			else
			{
				i++;
				j = 2;
			}
	}
	cout << i << endl;
}
