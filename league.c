#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()	{
	int i,j,n,m,temp;
	scanf("%d",&n);
	char name[n][50];
	int ga[n],gf[n];
	int points[n];
	for(i=0;i<n;i++)	{
		scanf("%s",name[i]);
	}
	scanf("%d",&m);
	char name1[m][50],name2[m][50];
	for(i=0;i<m;i++){
		scanf("%s %s %d %d",name1[i],name2[i],&gf[i],&ga[i]);
	}
	for(i=0;i<m;i++)	{
			if((gf-ga)>0){
				for(j=0;j<n;j++)
				{
					if(strcmp(name1[i],name[j])==0)
						points[i]=points[i]+2;
				}
			}
			else if((gf-ga)==0){
				for(j=0;j<n;j++)
				{
					if(strcmp(name1[i],name[j])==0)
						points[j]=points[j]+1;
				}
			}
			else if((gf-ga)<0){
				for(j=0;j<n;j++)
				{
					if(strcmp(name2[i],name[j])==0)
						points[j]=points[j]+2;
				}
			}
		}
		for(i=0;i<n-1;i++)	{
			for(j=0;j<n-i-1){
			if(points[j]>points[j+1])
			{

				temp=points[j];
				points[j]=points[j+1];
				points[j+1]=temp;
				}
               		}
		}
			for(i=0;i<n;i++)
				printf("\n%d",points[i]);
		
		}
