#include <iostream>
using namespace std;
int main()
{
	cout << "sayi giriniz (odd) : ";
	int s; cin >> s;
	for(int i = 0;i < s;i++)
	{
		for(int j = 0;j < s;j++)
		{
			if((j == 0 || j == s - 1) || (i < s / 2 + 1 && j == i) || (i < s / 2 + 1 && j == s - i - 1))
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			
		}
		cout << endl;
	}
	return 0;
}

