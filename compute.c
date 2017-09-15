#include<stdio.h>

int main()
{
	int i =0;
	int n;
	printf("Enter the power the 2\n");
	scanf("%d",&n);
	long int res=1;
	for(i=1;i<=n;i++)	{
		res=res*2;
	}
	printf("%li",res);		
}
