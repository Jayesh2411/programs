#include<stdio.h>
#include<stdlib.h>
// Include headers as needed


int main()
{
    // Write your code here
    int test,n,i,j,k,temp,c=0;
    scanf("%d",&test);
    while(test>0){
        scanf("%d",&n);
        int *a;
        a=(int*)malloc(sizeof(int)*n);
        for(i=0;i<n;i++)  {
            scanf("%d",&a[i]);

        }
        for(j=0;j<i;j++){
            for(k=1;k<i-j;k++){
                if(a[k]>a[k+1])
                {
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                    c++;
                }
            }
        }
        printf("\n %d",c);
        test--;
    }
    // Return 0 to indicate normal termination
    return 0;
}
