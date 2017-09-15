#include<stdio.h>
int main()	{
	int t,i,n,k,flag;
	
	scanf("%d",&t);	
	while(t--){
		scanf("%d",&n);
		int a[n];	
		i=0;		
		while(i++<n)
			scanf("%d",&a[i]);
		for(i=0;i<n-1;i++){
			flag=0;
			k=a[i]*a[i+1];
			for(i=0;i<n;i++){
				if(k==a[i]){
					flag=1;		
				}
			}
			if(flag==0){
				printf("no\n");
				break;
			}
		}
		if(flag==1)
			printf("yes\n");
	}
}
