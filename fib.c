#include<stdio.h>
int fib(int n) {
	if(n < 2)
		return 1;
	else	
		return n*fib(n-1);

}
int main()	{
	int n=25;
	while(1)
		printf("Warming PC:%d\n",fib(n));
}
