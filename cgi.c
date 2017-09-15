#include<stdio.h>
int main()	{
	int i,j,c=1;
	for(i=0;i<5;i++)	{
		for(j=0;j<=i;j++)	{
			if(j>3)
				break;
			printf("%d",c++);
		}
		printf("\n");
	}
}
