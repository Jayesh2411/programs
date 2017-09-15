#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int n;
    scanf("%d",&n);
    int a[n];
    int i=0,j=-1;
    for(i=0;i<n;i++){
            scanf("%d",&a[i]);
    }
	i=0;
	int sub=-1;
	int *list;
	list=(int*)malloc(sizeof(int)*20);
	list[0]=0;		
		int flag=0;
		j=-1;
	while(i<n) {
		if(a[i]==1)	{	
			if(sub<0)			
				sub=i;	
		}	
		else if(a[i]==0)	{
				if(flag==0 )	{
					flag=1;
				}
				else if(flag==1){
					if(sub>=0){	
					j=j+1;
					list[j]=i-sub-1;
					sub=-1;
					flag=0;	
					}
				}	
			}
		i++;
	}
	
		if(sub>=0){
			j++;
			list[j]=i-sub-1;
		}
		
	i=0;
	
	int max=0;
	max=list[0];
		while(i<=j){
			if(list[i]>max)
				max=list[i];
		i++;}
	int c=0;
	i=0;
	
	while(i<n){
		if(a[i]==1)
			c++;
	i++;
	}
	if(c>max){
		max=max+1;
	}
	printf("%d",max);
    return 0;
}

