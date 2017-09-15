#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(char pos[],int ,int);
int main()
{
	int j,k;
	
	char pos[3] = {'K','Q','J'};
		
	srand(time(NULL));
	printf("1:K   2:Q   3:J\n");
	printf("\nShuffling.....\n");
	for(int i = 0;i < 5;i++)	{
		j = rand()%3;
		k = rand()%3;
		swap(pos,j,k);
	}
	int ch;
	printf("\n Enter your guess for position of K ?: ");
	scanf("%d",&ch);
	if(pos[ch-1] == 'K'){
		printf("\nGood guess, You win Rs. 100");
		printf("\nDo you want to go Jackpot? 1 to play...\n");	
		ch = 0;
		scanf("%d",&ch);
	}
	else
		printf("\n \aLOSER!!!!!!\n");
	if(ch == 1){
		printf("\n Enter your guess for position of Q ?: ");
       		scanf("%d",&ch);
       		if(pos[ch-1] == 'K'){   
               		 printf("\nJackpot!!! You winn Rs 500.\n");
			 printf("\n%c %c %c\n",pos[0],pos[1],pos[2]);
		}
		else
			printf("\n \a You lose your money!\n");
	}
}
void swap(char pos[],int i,int j)	{
		char temp;
		temp = pos[i];
		pos[i] = pos[j];
		pos[j] = temp;
}

