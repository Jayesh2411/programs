#include<stdio.h>
#include<math.h>

int fact(int n)	{
	int i=1;
	while(n>0)	{
		i=i*n;
		n=n-1;
	}
	return i;
}


int main()	{

	int k=0;
	double i,j;
	double pii=0.0;
	int a;
	scanf("%d",&a);
	for(k=0;k<a;k++)	{
		i=pow(-1,k);
		i=i*fact((6*k));
		i=i*(13591409+(545140134*k));
		j=fact(3*k)*fact(k)*fact(k)*fact(k);
		j=j*(pow(640320,(3*k+1.5)));
		pii=i/j;
		
	}

	pii=pii*12;
	double pi=0.0;
	pi= 1/pii;
	printf("Pi ka approximate value: %f",pi);
}

