#include <iostream>
#include <fstream>
using namespace std;
string ters(string s)
{
	int size = s.size();
	string result = "";
	while(size > 0)
	{
		result += s[--size];
	}
	return result;
}
int main()
{
	ifstream dosya("input.txt");
	ofstream cikti("cikti.txt");
	if (!dosya) {
        cerr << "Dosya acilamadi." << endl;
        return 1;
    }
	string s;
	while(getline(dosya,s))
	{
		cout << ters(s) << endl;
		cikti << ters(s) << endl;
	}
	dosya.close();
	cikti.close();
	return 0;
}
