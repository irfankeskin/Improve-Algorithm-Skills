#include <iostream>
using namespace std;
int main()
{
	cout << "sayi giriniz : ";
	int s; cin >> s;
	for(int i = 0;i < s;i++)
	{
		for(int j = 0;j < s*2;j++)
		{
			if((j == s && i == 0) || (i > 0 && i != s / 2 && j == s - i) || (i > 0 && i != s / 2 && j == s + i) || (i == s / 2 && j > s / 2 - 1 && j < s * 2 - (s / 2 - 1)))
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
