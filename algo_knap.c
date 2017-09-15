#include<stdio.h>
int max(int a,int b)
{
	int x,y;
	x=a;
	y=b;
	if(x>y)
		return x;
	else
		return y;
}
int knap(int w,int val[],int wt[],int n)
{
	if(w==0 || n==0)
		return 0;
	else if(wt[n-1]>w)
	{
		return(knap(w, val,wt, n-1));
	}
	else
	{
		return max((val[n-1]+knap(w-wt[n-1],val,wt,n-1)),knap(w,val,wt,n-1));
		
	}
}	


int main()
{
	int val[]={60,100,120};
	int wt[]={10,20,30};
	int w=50;
	int n;
	n=sizeof(val)/sizeof(val[0]);
	
	printf("%d ",knap(w,val,wt,n));
}
