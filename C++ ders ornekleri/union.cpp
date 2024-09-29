#include <iostream>
using namespace std;
int check2(char *str,char x)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == x)
		return 0;
		i++;
	}
	return 1;
}
int check1(char *str,char x,int *i)
{
	int j = 0;
	while(j < *i)
	{
		if(str[j] == x)
		return 0;
		j++;
	}
	
	return 1;
}
void ft_union (char *str,char *str2)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(check1(str,str[i],&i) == 1)
		cout << str[i];
		i++;
	}
	i = 0;
	cout << " ";
	while(str2[i] != '\0')
	{
		if(check1(str2,str2[i],&i) == 1)
		{
			if(check2(str,str2[i]) == 1)
			cout << str2[i];
		}
		i++;
	}
}
int main(int ac,char **av)
{
	if(ac == 3)
	{
		ft_union(av[1],av[2]);
	}
	cout << endl;
return (0);
}

