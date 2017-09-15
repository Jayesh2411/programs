#include<stdio.h>
int a,b;
int fib(int n)	{
	printf("\na,b: %d %d",a,b);
	if(n==1)
		return a;
	else if(n==2)
		return b;
	else
		return(fib(n-1)+fib(n+1));
}
int main()	
{
	int n,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&a,&b,&n);
		if(n>2)
			printf("\n%d",fib(n));
	}
}
		
