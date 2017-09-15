#include<stdio.h>


int slen(char *s){
	int i=0;
	while(*s++ !='\0')
		i++;
	return i;
}
void rev(char *s)	{
	int i,j,c;
	for(i=0,j=slen(s)-1;i<j;i++,j--)	{
		c=s[i];
		s[i]=s[j];
		s[j]=c;
	}
}
void itoa(int n,char *s)	{
	int i=0;

	
	while(n>0)	{
		s[i++]=(n%10)+'0';
		n=n/10;
	}
	printf("%s",s);
	rev(s);	
}
int atoi(char *s)	{
	int n=0,i=0;	

	while(s[i] !='\0'){
		n=n*10+(s[i] -'0');
	i++;
	}
	return n;
}
int main()	
{
	int i;
	scanf("%d",&i);
	char *string;
	itoa(i,string);
	printf("\nString: %s",string);
	i=atoi(string);
	printf("\nInteger: %d",i);
}
