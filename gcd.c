#include<stdio.h>

int gcd(int i,int j){
		int rem=i%j;
		
		if(rem==0)
			return j;
		else
			gcd(j,rem);
		
}
int main(){
	int g,rem,j,i;
	printf("Enter the values:");
	scanf("%d %d",&i,&j);
	if(j==0 || i == 0){
		printf("Invalid Enter!");
		return 0;
	}
	if(i>j)
		g=gcd(i,j);
	else
		g=gcd(j,i);
	printf("\n GCD is:%d ",g);
	if(i<j){
		i=i+j;
		j=i-j;
		i=i-j;
	}
	while(i!=0){
		rem=i%j;
		
		if(rem==0){
			g=j;
			break;
		}
		else{
			i=j;
			j=rem;
		}
	}
	printf("\nGCD is: %d",g);

}
