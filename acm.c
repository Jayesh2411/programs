#include<stdio.h>
int main(void)
{
    int t,e,m,h;
   
    scanf("%d",&t);
    int i;
    for(i=0 ;i<t; i++)
    {
        int c=0;
        scanf("%d %d %d",&e,&m,&h);
        while(e>=3&&m>=3&&h>=0 || e>=3&&m>=2&&h>=1 || e>=2&&m>=3&&h>=1)
        {
            if(h==0)
            {
                e-=3;
                m-=3;
                c+=2;
            }
            else if(e>m)
            {
                e-=3;
                m-=2;
                h-=1;
                c+=2;
            }
            else
            {
                e-=2;
                m-=3;
                h-=1;
                c+=2;
            }
        }
 
        if(e>=1&&m>=2&&h>=0 || e>=2&&m>=1&&h>=0 || e>=1&&m>=1&&h>=1)
            c++;
        printf("%d\n",c);
 
    }
    return 0;
} 
