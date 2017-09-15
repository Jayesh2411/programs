/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*You need to complete this function */
#include<stdio.h>

int bin_search(int A[], int left, int right, int k)
{
    int mid=(left+right)/2;
    int flag=0;
    while(left <= right){
      	if(A[left]>k)
		break;
	  if(k<A[mid]) {
                right=mid;
        }
        else if(k>A[mid]){
            left=mid+1;
        }
        mid=(left+right)/2;
        if(A[mid]== k)
        {
            flag=1;
            break;
        }
    }
    if(flag == 1)
        printf("\n%d",mid);
    else
        printf("-1");
}
int main()	{
	int A[]={1,2,3,4,5,6,7,8};
	int k;	
	scanf("%d",&k);
	bin_search(A,0,7,k);
}
