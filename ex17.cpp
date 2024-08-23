#include <iostream>
using namespace std;
int strlen(int *str)
{
	int i;
	for(i=0;str[i] != '\0';)
	i++;
	return i;
}
int topla(int *x)
{
	int toplam = 0;
	int size = strlen(x);
	for(int i = 0;i < size;i++)
	toplam = toplam + x[i];
	return toplam;
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
		cin >>*(p+i);
	}
	cout << "Toplam : " << topla(p) << endl;
	delete[] p;
}
