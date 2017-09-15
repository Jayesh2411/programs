#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 10000
#define INFY 99999

 void merge(int arr[],int p,int q,int r)
{
	int i,j,k,n1,n2;
	n1 = q-p+1;
	n2 = r-q;

    int left[n1+1];
    int right[n2+1];
    i =0,j=0;
  	for(i = 0;i<=n1;i++)  {
        left[i] = arr[p+i];
  	}
  	left[n1] = INFY;

  	for(j = 0;j <=n2;j++) {
        right[j] = arr[q+1+j];
  	}

  	right[n2] = INFY;
  	i =0,j =0,k=0;

	for(k = p;k <= r;k++)    {
        if(left[i] <= right[j])    {
			arr[k]=left[i];
			i = i+1;
    }
    else
    {
        arr[k] = right[j];
        j = j+1;
    }
}
}

int merge_sort(int arr[],int first,int end)
{
	int i,mid;
	if(first<end)
	{
		mid=(first+end)/2;
		merge_sort(arr,first,mid);
		merge_sort(arr,mid+1,end);
		merge(arr,first,mid,end);
	}
}

int main()
{
	int i,n;
	n=N;

	int arr[n];

	time_t t;
	srand(t);
	for(i=0;i<=n;i++)
	{
		arr[i]=rand();
	}
	for(i = 0;i<=n;i++)
        printf("%d: %d\n",i,arr[i]);
	merge_sort(arr,0,n);

	for(i=0;i<=n;i++)    {
        printf("\n %d: %d",i,arr[i]);
	}
}
