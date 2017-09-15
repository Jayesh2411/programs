#include<stdio.h>

int main()
{
    int i,j,T;
    scanf("%d",&T);
    int arr[T];
    for(i=0;i<T;i++)
    {
        scanf("%d",&arr[i]);
 
    }
    for(i=0;i<T;i++)
    {
        int x=1;
        for(j=0;j<arr[i];j++)
        {
            printf("%d ",x);
            x=x+2;
        }
        printf("\n");
    }
    return 0;
}
 
								
