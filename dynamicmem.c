#include<stdio.h>
#include<stdlib.h>

int main()	{
	int *i;
	i = (int* )malloc(5*sizeof(int));
	
	for(int j = 0;j<5;j++)
		printf(" %d ",i[j]);
	i = (int* )realloc(i,10*sizeof(int));
	for(int j = 0;j<10;j++)
                printf("\n %d ",i[j]);
	free(i);
	for(int j = 0;j<10;j++)
                printf(" %d ",i[j]);
}
	

