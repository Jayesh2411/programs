#include<stdio.h>

int bo[4];
void bottle(int c,int i)	{
	bo[i]=0;
	int w;
	w=c;
	if(w>=10 && i==0 ){	
		bo[i]=bo[i]+w/10;
		w=w%10;
		t=1;
	}
	 if(w>=7 && (i==0) ||(i==1)){
		bo[i]=bo[i]+w/7;
		w=w%7;
		t=2;
	}
	if(w>=5 && i==0 || i==1 || i==2){
		bo[i]=bo[i]+w/5;
		w=w%5;
		t=3;
	}
	if(w>=1 && i==0 || i==1 || i==2 || i==3){
		bo[i]=bo[i]+w/1;
		w=w%1;
		t=0;
	}
	if(i<4)
		bottle(c,i+1);
	
}
	
int main()	{
	int w,j,t,min=0;
	
	scanf("%d",&t);
	while(t-- != 0)	{
		min=0;
		scanf("%d",&w);
		
		bottle(w,0);
		min=bo[0];
		j=0;
		while(j<4){
			printf("\nlist:%d\n",bo[j]);
			if(bo[j]<=min)
				min=bo[j];
			j++;
		}
		printf("%d\n",min);
	}
}
		







