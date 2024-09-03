#include <iostream>
using namespace std;
/*int fibonacci(int index)
{
	if(index < 2)
	return index;
	if(index < 0)
	return -1;
	return (fibonacci(index - 2) + fibonacci(index - 1));
}*/
int main()
{
	int a=1,b=2,c=3;
	int sum = 0;
	int temp;
	for(int i = 4000000;sum < i;)
	{
		if(c % 2 == 0)//serinin kontrolünü 3'ten başlattık fakat değer kontrolü yaparken 2 sayısını atladığımız için 2 yi sum'a ekledim.
		sum = sum + c;
		temp = c;
		c = b + c;
		a = b;
		b = temp;
	}
	cout << sum+2<< endl;
}
