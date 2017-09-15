#include<stdio.h>
int power(int m,int n){
	int res=1;
	if(n==0)
		return 1;
	else{
		while(n--){
			res=res*m;
		}
	return res;
	}
}
int main(){
	int i;
	for(i=0;i<7;i++){
		if(i<4)
			printf(" %d ",power(11,i));
		else
			printf("%d",power(11,6-i));
		printf("\n");
	}
}
