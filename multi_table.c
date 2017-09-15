#include<stdio.h>
int main()	
{

		// TODO Auto-generated method stub

		printf("\nMultiplication table analyzer 1.0 , Developer: Jayesh Sinha.\n=================================================================\n \n");
		printf("Enter rows and col of table:");

		long long int r,c;

		printf("\nEnter number of rows: ");
		scanf("%lli",&r);
		printf("\nEnter number of columns: ");
		scanf("%lli",&c);
		if(r<0)
			r=r-(2*r);
		if(c<0)	
			c=c-(2*c);
		printf("\n");
		long long int table[r+1][c+1];

		for(long int i=1;i<=r;i++)	{		
			for(long long int j=1;j<=c;j++)	{
				table[i][j]=i*j;
			}
		}

		long long int visited[r*c];

		long long int unique[(r*c)+1];
		for(long long int i=1;i<=r*c;i++)	{
			unique[i]=0;
		}

		printf("	");

		for(long long int k=1;k<=c;k++)	{
			printf("%lli	",k);
		}

		for(long long int i=1;i<=r;i++)	{
			printf("\n");
			printf("%lli	",i);
			for(long long int j=1;j<=c;j++)	{
				printf("%lli	",table[i][j]);
			}
		}
		printf("\n Sqaures in table:");
		long long int z=0;
		if(r>c)		{
			z=c;
		}
		else	{
			z=r;
		}
		for(long long int i=1;i<=z;i++)	{
			printf("\n%lli ",table[i][i]);

		}
		long long  int k=0;
		printf("\n Repetitive Numbers:");
		for(long long int i=1;i<=r;i++)	{
			for(long long int j=1;j<=c;j++)	{
				visited[k++]=table[i][j];
			}
		}

		long long int index=0;		
		for(long long int n=0;n<r*c;n++){
			for(long long int m=0;m<r*c;m++)	{
					if(visited[n] == visited[m])	{
						index=visited[n];
						unique[index]=unique[index]+1;
					}
				}
				for(long long  int a=0;a<r*c;a++)	{
					if(visited[a] == index)	{
						visited[a]=0;
					}
				}
			}
		printf("\n");

		for(long long int n=1;n<=r*c;n++)	{

			printf("%lli ->%lli 	",n,unique[n]);

			if(n%10 == 0)	{
				printf("\n");
			}
		}
		long long int max_no=0,freq=0;
		freq=unique[1];

		for(long long int i=1;i<=r*c;i++)	{
			if(freq<unique[i])	{
				freq=unique[i];
				max_no=i;
			}

		}
		printf("\n  Maximum frequency of number %lli  is %lli  \n ",max_no,freq);

}
