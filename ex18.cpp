#include <iostream>
using namespace std;
int strlen(int *str)
{
	int i = 0;
	while(str[i] != '\0')
	i++;
	return i;
}
int fark(int *x)
{
	int eb = x[0];
	int ek = x[0];
	int size = strlen(x) - 1;
	for(int i = 0;i < size;i++)
	{
		if(eb < *(x+i))
		eb = *(x+i);
		else if(ek > *(x+i))
		ek = *(x+i);
	}
	return eb - ek;
}
int main()
{
	cout << "sayi giriniz : ";
	int n;
	cin >>n;
	int *p = new int [n];
	for(int i = 0;i < n;i++)
	{
		cout << i+1 << ". sayi : ";
		cin >>p[i];
	}
	cout << "En buyuk ile en kucuk sayi arasindaki fark : " << fark(p) << endl;
	delete[] p;
}

