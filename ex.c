#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void play(int bet,int* cash)
{
	char *c = (char*)malloc(3*(sizeof(char)));
	c[0] = 'J';c[1] = 'Q';c[2] = 'K';
	printf("Shuffling ...\n");
	srand(time(NULL));
	int i;
	for(i = 0;i < 5;i++)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		int temp = c[x];//swap j q k
		c[x] = c[y];
		c[y] = temp;
	}
int guess;
printf("What's the position of queen // 1,2,3 ? == ");
scanf("%d",&guess);
if(c[guess - 1] == 'Q')
{
	*cash += 3*bet;
	printf("You Win ! Result = \ %c %c %c \ Total Cash = $%d",c[0],c[1],c[2],*cash);
}
else
{
	*cash -= bet;
	printf("You Loose ! Result = \ %c %c %c \ Total Cash = $%d",c[0],c[1],c[2],*cash);
}
free(c);
}
int main()
{
	int bet;
	int cash;
	printf("\t****Welcome to the Virtual Casino**** \n\n\n");
	printf("Load Cash : $ ");
	scanf("%d",&cash);
	printf("Total cash = $%d\n",cash);
	while(cash > 0)
	{
		printf("What is your bet? $");
		scanf("%d",&bet);
		if(bet == 0 || bet > cash)
		break;
		play(bet,&cash);
		printf("\n\n***********************************************************\n\n");
	}
	return 0;
}
