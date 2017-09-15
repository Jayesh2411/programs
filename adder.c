#include<stdio.h>
int main(){
	int n,a,sum=0,j=0;
	scanf("%d",&n);
	while(j++<n){
		scanf("%d",&a);
		sum+=a;
	}
	printf("%d",sum);
	if(sum%n !=0)
		printf("-1");
}
