
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout <<"uzunluk : ";
	cin >> n;
	int arr[n];
	for(int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	for(int j = 0;j < n-1;j++)
	{
		int temp = 0;
		for(int k = 0;k < n-1-j;k++)
		{
			if(arr[k]<arr[k+1])
			{
				temp = arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
		}
	}
	cout << "En buyuk 1 :" << arr[0] << endl;
	cout << "En buyuk 2 :" << arr[1] << endl;
	cout << "En buyuk 3 :" << arr[2] << endl;
}




#include <iostream>
using namespace std;
int main()
{
	int a[7] = {-4,-9,-1,-8,-2,-8,-7};
	int as1 = a[0];
	int as2 = 0;//-2147483647;
	int as3 = 0;//-2147483647;
	for(int i = 1;i<7;i++)
	{
		if(a[i]>=as1)
		{
			as3 = as2;
			as2 = as1;
			as1 = a[i];
		}
		else if(a[i]>=as2)
		{
			as3 = as2;
			as2 = a[i];
		}
		else if(a[i]>=as3)
		{
			as3 = a[i];
		}
	}
	cout << "En buyuk 1 : " << as1 << endl;
	cout << "En buyuk 2 : " << as2 << endl;
	cout << "En buyuk 3 : " << as3 << endl;
}



 
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a[8] = {5,7,2,8,9,1,4,3};
	int toplam = 0;
	int carpim = 1;
	int tsay = 0;
	int tektp = 0;
	int eb = a[0] ;//-2147483647;
	int ek = a[0] ;//-2147483647;
	for(int i = 0;i<8;i++)
	{
		toplam = toplam + a[i];
		carpim = carpim * a[i];
		if(a[i] % 2 == 1)
		{
			tektp = tektp + a[i];
			tsay = tsay + 1;
		}
		if(a[i]>eb)
		eb = a[i];
		if(a[i]<ek)
		ek = a[i];
	}
	cout << "ortalama : "<< (float)toplam/8 << endl;
	cout << "Geometrik ortalama : "<< pow(carpim,(float)1/8)<< endl;
	cout << "tek sayilarin ortalamasi : "<< (float)tektp/tsay << endl;
	cout << "En buyuk cift ve en kucuk cift sayilarin ortalamasi : "<<(float)(eb+ek)/2 << endl;
}
