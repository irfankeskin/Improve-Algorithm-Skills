#include <iostream>
using namespace std;
void f(char *s)
{
	bool control;
	for(int i = 0;s[i] != '\0';i++)
	{
		control = true;
		int j = 0;
		while(j < i)
		{
			if(s[i] == s[j])
			{
				control = false;
			}
			j++;
		}
		if(control)
		{
			cout << s[i];
		}
	}
}
int main()
{
	cout << "dizgi giriniz : ";
	char *s = new char [100];
	cin >> s;
	f(s);
	delete[] s;
	return 0;
}
