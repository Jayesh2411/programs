#include<stdio.h>

int digitalRoot(int n){
	int temp=n,rem,sum=0;
	while(n){
		rem=temp%10;
		sum=sum+rem;
		n=n/10;
	}
	return sum;
}
int main()	{
	int i,n,d,maxele=0,max=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i == 0){
			d=digitalRoot(i);
			if(max<d){
				max=d;
				maxele=i;
			}
			else if(max == d){
				if(maxele>i)
					maxele=i;
			}
		}
	}
	printf("\nBest Divisor: %d",maxele);

}
