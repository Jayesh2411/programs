#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int atoii(char *string)	{

	int num=0;
	int len,i=0;
	if(string[0] >= 'a' && string[0] <= 'z')	{
			return -1;
			
	}
	else
	{
		len=strlen(string);
		
		while(len > 0)	{
			num=num*10;
			num=num+(string[i] - '0');
			i++;
			len--;
			
		}
		return num;
	}
}
		

int main()	{
	

	char *string;
	string=(char *)malloc(sizeof(char)*1000);
	printf("\nEnter string:");
	scanf("%s",string);
	int number=0;
	number = atoii(string);
	if(number < 0)	{
		printf("Error! Character Exception!!\n");
		exit(0);
	}
	printf("\nThe converted string is: %d  \n",number);
	number=number*number;
	printf("\nIts square is : %d\n",number);
}
