#include<stdio.h>
#define MAX 100

int getline1(char name[],int lim)
{
	char c;
	int i=0;
	printf("\nEnter the line: \n");
	while(lim>0 && ((c=getchar())!=EOF) && c!='\n')
		{
			name[i++]=c;
		}

		if(name[i]='\n')
			name[i]='\n';
		name[i]='\0';
	return i;		
			
}

int strindex(char name[],char pattern[])
{
	int i=0,j;
	
	while(name[i]!='\0')
	{
		i++;
	}
	
	int limit=i;
	i=0,j=0;
	 
	int flag = 0;
		while(1)
		{
			if( pattern[i] == name[j] )
			{		
				i++;
				j++;
	
				if(pattern[i] == '\0')
				{
					
					flag = 11;
					break;
				}
			}
			else 
			{	
				i=0;
				j++;	
				
			}
			
				if(j == limit)	{
					break;
				}
		}
	
		
		if(flag==11)
			return 11;
		else
			return 0;
	}
	
		
int main()	
{
		int found=0;
		int lim=MAX;
		char c,name[lim];
		char pattern[lim];
		int i=0;
		printf("Enter your search:\n");
		while((c=getchar())!='\n')
		{
			pattern[i++]=c;
		}
		printf("Given s: %s\n",pattern);
		while(getline1(name,lim)>0)
	 	{
			found=strindex(name,pattern);
			if(found>0)
			{
				printf("%s",name);
			}
			else
				printf("\nNot Found!\n");
		}
	return 0;
}	

