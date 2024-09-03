#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int random_generator;
	srand (time(NULL));
	random_generator = rand() % 6 + 1;
	cout << random_generator << endl;
	return 0;
}
