#include <iostream>
#include <cstdlib>
#include <ctime>
// transpoz alma
using namespace std;
int main()
{
	srand(time(NULL));
	int n;
	cin >> n;
	int arr[n][n];
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			arr[i][j] = rand() % 9 + 1;
		}
	}
	cout << endl;
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "transpoz : " << endl;
	int temp;
	for(int i = 0;i < n;i++)
	{
		for(int j = i + 1;j < n;j++)
		{
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
