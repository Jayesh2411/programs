#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void itoa(long int num,char *string)	
{
	int i=0;
	while(num > 0)	{
		string[i]=num%10+'0';
		i++;
		num=num/10;
	}
	int len=i-1;
	char *buff;
	buff = (char *)malloc(sizeof(char)*1000);
	i=0;
	while(len>=0)	{
		buff[i] = string[len];
		i++;
		len--;
	}
	strcpy(string,buff);
}
int main()	{	
	long int number;
	printf("\n Enter the number: ");
	scanf("%li",&number);
	char *string;
	string = (char *)malloc(sizeof(char)*1000);
	itoa(number,string);
	printf("\nThe string is :%s \n",string);
}
