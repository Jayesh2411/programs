#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){ 
        int a[3][3];

        int i,j,k;
        time_t t;
        srand((unsigned)time(&t));

        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        a[i][j]=rand()%10;
                }
        }
        int r=0,c=0,min,temp=0;
        
        printf("\nOriginal:\n");
         for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                       printf("%d ",a[i][j]);
                }
                printf("\n");
        }

        for(k=0;k<2;k++){
                i=0;
                for(i=0;i<3;i++){
                        min=9999,r=0,c=0;
                        for(j=0;j<3;j++){
                                if(min>a[j+k][i]){
                                        min=a[j+k][i];
                                        r=j;c=i;
                                }
                        }
                        printf("Min:%d Row :%d Col:%d Swap Row%d Col%d\n",min,r,c,k,i);
                        temp = a[k][i];
                        a[k][i]=a[r][c];
                        a[r][c]=temp;
			printf("\nSwapped: %d, %d\n",a[k][i],a[r][c]);
			printf("\nAfter Sorting\n");
			int i1,j1;
	        	 for(i1=0;i1<3;i1++){
        	        	for(j1=0;j1<3;j1++){
                	       		printf("%d ",a[i1][j1]);
                		}
               			printf("\n");
        		}


                }
        }
        printf("\nAfter Sorting\n");
         for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                       printf("%d ",a[i][j]);
                }
                printf("\n");
        }

        //printf("\nMedian: %d",findMedian(a,3,3));  	
}
 void sort(int arr[],int len){

     int i,j;

     for(i=0;i<len;i++){

         for(j=0;j<len-1-i;j++){

             if(arr[j]>arr[j+1])

                {

                    int t=arr[j];

                    arr[j]=arr[j+1];

                    arr[j+1]=t;

                }

         }

     }i=0;
	while(i<len)
		printf("\n%d",arr[i++]);

 }

int findMedian(int A[3][3], int n11, int n12) {

    int c=0,i,j,k=0;

    int arr[n11*n12];

    for(i=0;i<n11;i++){

        for( j=0;j<n12;j++){

            arr[c++]=A[i][j];

        }

    }

    sort(arr,c+1);

    int median=(c/2)+1;

    return arr[median];
}







