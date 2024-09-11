#include <iostream>
using namespace std;
char *f(char*s)//abbdgef
{
	int i = 0;
	char k1 = s[0];
	if(k1 == '\0')
	{
		return s;
	}
	bool silme = false;
	while(k1 != '\0')//aabbccddee , abccddeeff , abbccdef
	{
		char k2=s[i+1];
		if(k1 == k2 && i == 0)//i 'nin 0 olma sebebi 2. ve 3. harf esitse 1.harfi yok etmemek icin.
		{
			silme = true;
			s = &s[i+2];
		}
		else if(k1 == k2)//ortalarda herhangi bir yerde esitlik durumu varsa kaydýrma islemi
		{
			silme = true;
			while(s[i] != '\0')
			{
				s[i] = s[i+2];
				i++;
			}
			s[i] = '\0';
		}
		i++;
		k1 = s[i];
		
	}
	if(silme == false)
	{
		return s;
	}
	else
	{
		return f(s);
	}
}
int main()
{
	cout << "kontrol icin harf giriniz (aabbdss) gibi :" ;
	char *s = new char[100];
	cin >> s;
	cout << "ayni ikililer silindi : " << f(s) << endl;
	delete[] s;
	return 0;
}
