#include<stdio.h>

int removeDuplicates(int *arr,int n){
	int i,j;
	j=0;
	for(i=0;i<n;i++)
		if(arr[i] != arr[i+1])
		arr[j++]=arr[i];
	return j;
}
int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // removeDuplicates() returns new size of
    // array.
    n = removeDuplicates(arr, n);
 
    // Print updated array
    for (int i=0; i<n; i++)
        printf("%d ", arr[i]);
 
    return 0;
}
