#include <iostream>
#include <cmath>
using namespace std;
int check(int x)
{
	int counter = 0;
	int karekok = sqrt(x);//karekokunu hesaplamak kar��l�kl� b�lenlerini bulmam�z� sa�lar. 36 i�in 1/36 , 2/18 , 3/12 , 4/9 gibi
	for(int i = 1;i <= karekok;i++)
	{
		if(x % i == 0)
		counter = counter + 2;//bu sat�rda ikili kontrol yap�ld��� i�in 2 art�r�ld�.
	}
	if(karekok * karekok == x)// 36 i�in 6 ve 6 iki defa say�laca�� i�in 1 ��kar�ld�.
	{
		--counter;
	}
	return counter;
}
int main()
{
	int triangel = 0;
	int i = 1;
	while(true)
	{
		triangel = triangel + i;
		if(check(triangel) > 500)
		{
			cout << "500'den fazla bolen sayi : " << triangel << endl;
			break;
		}
		i++;
	}
	return (0);
}
