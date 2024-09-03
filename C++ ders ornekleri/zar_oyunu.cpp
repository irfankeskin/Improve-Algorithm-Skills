#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	cout << "sayi : " ;
	int n;
	cin >> n;
	cout << endl;
	int skor = 0;
	int d1[n];
	int d2[n];
	for(int i = 0;i < n;i++)
	{
		int o1 = rand() % 6 + 1;
		int o2 = rand() % 6 + 1;
		d1[i] = o1;
		d2[i] = o2;
		if(d1[i]>d2[i])
		skor += 1;
		else if(d1[i]<d2[i])
		skor-=1;
	}
	for(int j = 0;j < n;j++)
	cout << d1[j] << " ";
	cout << endl;
	for(int j = 0;j < n;j++)
	cout << d2[j] << " ";
	cout << endl;
	cout << endl;
	if(skor>0)
	cout <<"o1 kazandi." << endl;
	else if(skor<0)
	cout <<"o2 kazandi." << endl;
	else
	cout <<"berabere"<< endl;
	return 0;
}
