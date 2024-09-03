#include <iostream>
//toplama oyunu
//kullanýcýdan alýnan 5 sayýnýn 4 ile max toplam min toplam bul
using namespace std;
int main()
{
	cout << "sayi :" ;
	int num;
	cin >> num;
	int arr[num];
	for(int i = 0;i < num;i++)
	{
		cout << i+1 << ". sayi : ";
		cin >>arr[i];
	}
	int temp;
	for(int j = 0;j<num;j++)
	{
		for(int k = 0;k < num-j;k++)
		{
			
			if(arr[k]<arr[k+1])
			{
				temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp;
			}
		}
	}
	int buyuktoplam = 0;
	int kucuktoplam = 0;
	//En buyuk toplam
	for(int i = 0;i < num - 1;i++)
	{
		buyuktoplam = buyuktoplam + arr[i];
	}
	cout << "buyuktoplam : "<<buyuktoplam  << endl;
	//kucuktoplam
	for(int i = num;i > 0;i--)
	{
		kucuktoplam = kucuktoplam	 + arr[i];
	}
	cout << "kucuktoplam : "<< kucuktoplam << endl;
}
