#include<stdio.h>
int main(){
int i,val,j,t,n,p;
int a[1000];
scanf("%d",&t);
for(p=1;p<=t;p++){
	scanf("%d",&val);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++)
			if(a[i]+a[j]==val){
				printf("Case #%d: %d %d\n",p,i+1,j+1);
				val=0;
			}
		if(!val)
			break;
		}
}
return 0;
} 
