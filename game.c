#include<stdio.h>

int canJump(int* A, int n1) {
	int j;
    if(n1==0)
        return 0;
    if(n1==1)
        return 0;
int index=0;
    for( j=0;j<n1;j=j+A[j]){
		printf("\n%d",j);
		index=j;
	}
    if(A[index]==A[n1-1])
        return 1;
    else
        return 0;
}
int main(){
	int A[]={1,2,1,8,8,1,4};
	printf("\n%d",canJump(A,7));
}
