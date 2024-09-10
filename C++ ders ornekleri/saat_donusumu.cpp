#include <iostream>
using namespace std;
int main()
{
	cout << "12'lik dilimde saat  " ;//09:05:12PM gibi
	char s[11];
	cin >> s;
	cout << endl;
	int num = 0;
	if(s[8] == 'P')
	{
		if(s[0] == '1' && s[1] == '2')
		{
			s[0] = '0';
			s[1] = '0';
			s[8] = '\0';
		}
		else
		{
			num += (s[0] - 48)*10;
			num += (s[1] - 48);
			num =  num + 12;
			s[0] = num / 10 + 48;
			s[1] = num % 10 + 48;
			s[8] = '\0';
		}
	}
	else
	s[8] = '\0';
	cout << "24'luk sistemde saat : " << s << endl;
}
