#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a capital letter : ";
	char start;
	cin >> start;
	int size = start - 65;
	while(size < 26)
	{
		int st = start;
		while(st <= size + 65)
		{
			cout << (char)st;
			++st;
		}
		--st;
		while(st > start)
		{
			--st;
			cout << (char)st;
		}
		++size;
		cout << endl;
	}
}
