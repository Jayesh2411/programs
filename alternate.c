#include<stdio.h>

void sort(int arr[],int len){
	int i,j,temp;
	for(i=0;i<len;i++){
		for(j=0;j<len-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<len;i++)
		printf(" %d ",arr[i]);
}
int main(){
	int arr[]={12,10,6,4,15,3,7,8};
	int len=sizeof(arr)/sizeof(int);
	sort(arr,len);
	int i=0;
	int flag=0;
	len=len-1;
	while(i<=len){
		if(flag == 0){
			printf("\nLarger");
			printf(" %d ",arr[len--]);
			flag=1;
		}
		else{
			flag=0;
			printf("\n Smaller");
			printf(" %d ",arr[i++]);
		}
		
	}
}




/*
Algorithm
sort it
3 4 6 7 8 10 12 15

*/
