#include<stdio.h>
int hcf(int x,int y)	{

int q,r;
q=x/y;
r=x-(q*y);
if(r == 0)
	return y;
else 
	hcf(y,r);
}

int main()	{
	int x,y;
	printf("Enter  the two digits");
	scanf("%d %d",&x,&y);
	int r =0;
	r=hcf(x,y);
	printf("%d",r);
}


