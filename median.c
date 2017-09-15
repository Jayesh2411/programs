/**
 * @input A : 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Integer
 */
#include<stdio.h>
void merge(int *,int,int,int);
void msort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        msort(arr, l, m);
        msort(arr, m+1, r);
 
        merge(arr, l, m, r);
    }
}

void merge(int *B,int s,int m,int e)	{
	int i,j,k;
	int n1,n2;
	n1=m-s+1;
	n2=e-m;
	int L[n1],R[n2];
	i=0;
	while(i<n1){
		L[i]=B[s+i];
		i++;
	}
	j=0;
	while(j<n2){
		R[j]=B[m+1+j];
		j++;
	}
	i=0,j=0,k=s;
	while(i<n1 && j<n2){
		if(L[i]<=R[j])
			B[k]=L[i++];
		else
			B[k]=R[j++];
		k++;
	}
	while(i<n1)
		B[k++]=L[i++];
	while(j<n2)
		B[k++]=R[j++];
}
	
int findMedian(int A[3][3], int n11, int n12) {
    int B[n11*n12];
    int c=0,i,j;
    for( i=0;i<n11;i++){
        for( j=0;j<n12;j++){
            B[c++]=A[i][j];
        }
    }
    msort(B,0,c-1);
    int med=(c/2);
	for( i=0;i<c;i++)
        	printf(" %d ",B[i]);
    return B[med];
}

int main()
{			
	int A[3][3]={1,2,3,4,5,6,7,5,3};
	printf("Med: %d",findMedian(A,3,3));
}

