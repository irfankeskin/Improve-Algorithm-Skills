#include <iostream>
using namespace std;
int main()
{
	cout << "Enter a capital letter : ";
	char start;
	cin>>start;
	int size = start - 65;
	int wcount = 1;
	int space = ('Z' - start) * 2;
	while(size < 26)
	{
		int st = start;
		int i = 0;
		while(i < space)
		{
			cout << " ";
			++i;
		}
		int j = 0;
		while(j < wcount / 2 + 1)
		{
			cout<<(char)st;
			++j;
			++st;
		}
		--st;
		int k = 0;
		while(k < wcount / 2)
		{
			--st;
			cout<<(char)st;
			k++;
			
		}
		++size;
		space = space - 2;
		wcount = wcount + 2;
		cout << endl;
	}
	return 0;
}
