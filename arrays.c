#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()	{
	int n,i,j,sum=0,max,min;
	long long int k;
	scanf("%d",&n);
	scanf("%lli",&k);
	if((n>=1 && n<=100000) && (k>=0 && k<=1000000000))
	{	
		int a[n],b[n];
		for(i=0;i<n;i++)	
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)	
			scanf("%d",&b[i]);
		for(i=0;i<n;i++)	
			sum=sum+a[i]*b[i];
		for(j=0;j<n;j++){
				if(abs(b[max])<abs(b[j]))
					max=j;
		}
	if(b[max]<0){
		if(a[max]<0)
			a[max]=a[max]+(k*2);	
		else	
			a[max]=a[max]-(k*2);
		}
	else{	
		a[max]=a[max]-(k*2);
	}
	sum=0;
	for(i=0;i<n;i++)	{
		sum=sum+a[i]*b[i];
	}
		printf("%d",sum);
	}
	return 0;
}
