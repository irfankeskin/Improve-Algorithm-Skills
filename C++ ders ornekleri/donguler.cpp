					/***\
					*   *
					*   *
					*   *
					\***/

#include <iostream>
using namespace std;

void print(char first,char mid,char last,int size)
{
	for(int i = 1;i <= size;i++)
	{
		if(i==1)
		cout << first;
		else if(i==size)
		cout << last;
		else
		cout << mid;
	}
	cout << endl;
}
int main()
{
	cout << "Boyut giriniz : ";
	int n;
	cin >> n;
	for(int i = 1;i <= n; i++)
	{
		if(i==1)
		print('/','*','\\',n);
		else if(i==n)
		print('\\','*','/',n);
		else
		print('*',' ','*',n);
	}
}
                    
/*                         ******
							*****
							 ****
							   **
							    *
*/

#include <iostream>  
using namespace std;
int main()
{
	cout << "Boyut giriniz : ";
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < i;j++)
		{
			cout <<" ";
		}
		for(int k = 0; k < n-i;k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

/*
					*******
					 *****
					  ***
					   *
*/
#include <iostream>  
using namespace std;
int main()
{
	cout << "Boyut giriniz (Tek sayi) : ";
	int n;
	cin >> n;
	int star = n;
	int space = 0;
	for(int i = 0;i < n; i++)
	{
		for(int k = 0;k < space;k++)
		cout << " ";
		for(int j = 0; j < star;j++)
		cout << "*";
		star = star - 2;
		space = space + 1;
		cout << endl;
	}
}

/*
						   *
						  ***
						 *****
						*******

*/
#include <iostream>
using namespace std;
int main()
{
	cout << "Boyut giriniz (TEK) ";
	int n;
	cin >> n;
	int star = 1;
	int space = n;
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < space;j++)
		cout << " ";
		for(int k = 0;k < star;k++)
		cout << "*";
		space = space - 1;
		star = star + 2;
		cout << endl;
	}
}
/*
		*
	   **
	  ***
	   **
	    *
*/


#include <iostream>
using namespace std;
void print(int size,char ch)
{
	for(int i = 0;i < size;i++)
	{
		cout << ch;
	}
}
int main(void)
{
	cout << "Boyut giriniz : ";
	int n;
	cin >> n;
	int star;
	int space;
	for(int i = 0;i < n;i++)
	{
		if(i < n / 2 + 1)
		{
			space = n / 2 - i;
			star = star + 1;
			print(space,' ');
			print(star,'*');
			cout << endl;
		}
		else
		{
			space = space + 1;
			star = star - 1;
			print(space,' ');
			print(star,'*');
			cout << endl;
		}
	}
	return 0;
}
/*
	*
	**
	***
	****
	***
	**
	*
*/
#include <iostream>
using namespace std;
void print(int size,char ch)
{
	for(int i = 0;i < size; i++)
	{
		cout << ch;
	}
}
int main()
{
	cout << "Boyut giriniz : ";
	int n;
	cin >> n;
	int star;
	for(int i = 0;i < n;i++)
	{
		if(i < n / 2 + 1)
		star = star + 1;
		else
		star = star - 1;
		print(star,'*');
		cout << endl;
	}
	return 0;
}
