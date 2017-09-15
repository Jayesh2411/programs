#include<stdio.h>

int main()
{
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	int i =0;
	int c =0;
	int flag = 0;
	i=2;
	if(x>0)	{
	printf("\n %d can be expressed as the Products of the following Factors:\n",x);
	
	while(i<=x)	{
		if(x%i == 0)	{
		//	printf("%d *",i);
			x=x/i;
			flag=1;	
			c=c+1;
		}
		else	{
			i=i+1;
		}
		if(flag == 1 && x%i != 0)   {
                                printf("%d raised to power of %d \n",i,c);
                                flag = 0;
                                c=0;
                        }
	}
	}
	else
	printf("\n Error! Cant factorize negative nos!!\n");
}
