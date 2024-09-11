#include <iostream>
using namespace std;
int len  (char *s)
{
	int lenght = 0;
	for(int i = 0;s[i] != '\0';i++)
	{
		lenght++;
	}
	return lenght;
}
bool ispalindrome(char *s)
{
	int size = len(s);
	for(int i = 0; i <= size/2;i++)
	{
		if(s[i] != s[size -1 -i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	cout << "dizgi giriniz : ";
	char * c = new char [100];
	cin >> c;
	if(ispalindrome(c))
	{
		cout << "palindrome dizgi" << endl;
	}
	else
	{
		cout << "dizgi palindrome degil" << endl;
	}
	delete[] c; 
	return 0;
}
