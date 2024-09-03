#include <iostream>
using namespace std;
int main()
{
	int x[5];
	int i = 0;
	while(i < 5)
	{
		cout << i + 1 << ". sayiyi giriniz : ";
		cin >> x[i];
		++i;
	}
	int enbuyuk = x[0];
	int k = 0;
	while(k < 5)
	{
		if(enbuyuk < x[k])
		enbuyuk = x[k];
		++k;
	}
	cout << "En buyuk sayi : " << enbuyuk << endl;
	return 0;
}
