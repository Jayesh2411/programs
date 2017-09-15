#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int n,i,c=0;
	time_t t;
	int arr[100][100];
	srand((unsigned) time(&t));
	printf("\nEnter how many values :");
	scanf("%d",&n);
	int p;
	printf("\nEnter number of digits:");
	scanf("%d",&p);
	for(i=0;i<n;i++){
		c=0;
		while(c<p){
			arr[i][c]=rand()%10;
			printf("%d ",arr[i][c]);
			c++;
		}
		printf("\n");
	}
	c=0;
	int a[p+1];
	int k=0,sum=0;
	for(i=p-1;i>=0;i--){	
		c=0;
		sum=0;
		while(c<n){
			sum=sum+arr[c][i];
			c++;
		}
		a[k++]=sum;
	}
	c=0;	
	printf("\n");
	int rem,carry;
	a[p]=0;
	while(c<p){
		rem=0;
		carry=0;
		if(a[c]>9){
			rem=a[c]%10;
			carry=a[c]/10;
			a[c]=rem;
			a[c+1]+=carry;
		}
		c++;
	}
	
	c=p;
	printf("\n");
	while(c>=0)
		printf(" %d ",a[c--]);

	
			
}
