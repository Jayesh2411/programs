#include<stdio.h>
#include<stdlib.h>

int modify(int x,int *y){
	x=x+20;
	*y=*y-5;
	return *y-x;
}
int main(){
	unsigned short i=32767;
	printf("%d\n",i);
	i++;
	i=i+32768;
	printf("%d\n",i);
	int j=8;
	i=170;
	printf("\\%d ",i>45 || j<100 && j>10);
	float c=i/j;
	printf("%f",c);
	int a=10,b=20;
	int c1=modify(a,&b);
	printf(" %d ",c1);
	printf(" %d ",a);
	printf(" %d ",b);
	a=0;
	while(a<5){
		int r=0;
		r++;
		a++;
	}
	int *arr=(int *)malloc(sizeof(int)*100);
	printf(" arr %d",arr[65]);	
	
}
