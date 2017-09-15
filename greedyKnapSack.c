#include<stdio.h>
#include<stdlib.h>

void knapsack(int obj,float wt[],float pro[],float capacity  )
{
	float x[20],tp=0;
	int i,j,u;
	u=capacity;
	for(i=0;i<obj;i++)
		x[i]=0.0;
	for(i=0;i<obj;i++)
	{
		if(wt[i]>u)
			break;
		else {
			x[i]=1.0;
			tp=tp+pro[i];
			u=u-wt[i];
		}
	}
	if(i<obj)
		x[i]=u/wt[i];
	tp=tp+(x[i]*pro[i]);
	printf("\nResultant vector is\n");
	for(i=0;i<obj;i++)
		printf("%f \t",x[i]);
	printf("\nMaximum profit: %f ",tp);
}	
int main()
{
	int objects,i,j;
	float *ratio,*wt,*pro,capacity,temp;

	printf("Enter the no of objects: \n");
	scanf("%d",&objects);

	printf("Enter the capacity: \n");
	scanf("%f",&capacity);

	printf("\nEnter weight and profit:\n");

	wt = (float *) malloc (sizeof(float)*objects);
	pro = (float *) malloc (sizeof(float)*objects);
	ratio = (float *)malloc (sizeof(float)*objects);
	
	for(i=0;i<objects;i++)
	{
		scanf("%f",&wt[i]);
		scanf("%f",&pro[i]);
		ratio[i] = wt[i]/pro[i];
	}
	
	for(i=0;i<objects;i++)
	{
		for(j=1;j<i;j++)
		{
			if(ratio[i]<ratio[j])
			{
				temp=ratio[j];	
				ratio[j]=ratio[i];
				ratio[i]=temp;
			
				temp=wt[j];
                       		 wt[j]=wt[i];
                       		 wt[i]=temp;

				temp=pro[j];
                       		 pro[j]=pro[i];
                       		 pro[i]=temp;
			}
		}

	}
	knapsack(objects,wt,pro,capacity);
	return 0;
}

