#include <stdio.h>

int main()
{
    int n,q;

    scanf("%d %d",&n,&q);
    int a[n];
    int qa[n];
    int i=0,j=0,flag=0;
	int prime[10000];
	prime[0]=2;
	int in=0;
	for(i=3;i<10000;i++){
		flag=0;
		for(j=2;j<i/2;i++){
			if(i%j == 0 ){
				flag==1;
				break;		
			}
		}
		if(flag == 0)
			prime[++in]=i;
	}
		


    for(i=0;i<n;i++)    {

            scanf("%d",&a[i]);
    }
    for(i=0;i<q;i++)    {
            scanf("%d",&qa[i]);
    }
    int d[n];
    int i1,isPrime=0,num,j1,e=0;
    for(i=0;i<q;i++)    {
        flag=0;
        for(j=0;j<n;j++)    {
                if(qa[i]%a[j]==0)
                {
                    d[i]=a[j];
                    flag=1;
                }
        }
        if(flag == 0)
            printf("\nNO");
        else{
		
			qa[i]=qa[i]/d[i];
			   e=0;
			for(i1=0;i1<in;i1++)	{
			    
				if(qa[i]%prime[i1] == 0){
				    j1=0;
					while(j1<in){
						if(qa[i]/prime[i1] == prime[j1]){
						    e=1;
							printf("\nYES");
							   break;
						}
						else if(qa[i]<prime[j1]){
						    qa[i]=qa[i]/d[i];
						    break;
						}
						j1++;
						}
					}
					if(e==1)
					    break;
				}
			
	}
}			
    return 0;
}

