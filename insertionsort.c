#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{

	time_t t;
	srand(t);
	int arr[10000];
	int n=10000;
	int i=0;
	for(i=0;i<n;i++)
	{
		arr[i]=rand();
	}
	
	int len,j,temp;
	i=0;
	for(j=1;j<n;j++)
	{
		
		i=j;
		while(i>0 && arr[i]<arr[i-1])
			{
			
					temp=arr[i];
					arr[i]=arr[i-1];
					arr[i-1]=temp;
				i--;	
			}
			
	}
	
	for(i=0;i<n;i++){
		printf(" %d :	%d\n ",i,arr[i] );
			}
		printf("\nNo of iterations: %d",n);
			
}
