#include<stdio.h>
#include<stdlib.h>
#define MAX 256

void rd(int *str) {
	int hash[MAX]={0};
	int i=0,ri=0;
	int temp;
	while(*(str+i) != -1)	{
		temp=*(str+i);
		if(hash[temp]==0)	{
			hash[temp]=1;
			*(str+ri)=*(str+i);
			ri++;
		}	
		i++;
	}
	i=0;
	while(i<ri)
		printf("%d",*(str+i++));
}

int main()	
{
	int s[]={1,2,3,4,1,3,4,5,1,-1};
	rd(s);
}
