#include <iostream>
using namespace std;
int main()
{
	for(int i = 3;i < 1000/3;i++)
	{
		for(int j = i + 1;j < 1000/2;j++)
		{
			int c = 1000 - i - j;
			if(i * i + j * j == c * c)
			{
				cout << i <<" "<<  j <<" "<< c << endl;	
				cout << "carpim : " << i*j*c << endl;
			}	
		}	
	}	
}
