#include<stdio.h>
#include<stdlib.h>
long long int m,n;
int flag=0;
void fire(long long int forest[m][n],long long int r,long long int c) {
	long long int i,j,min;
	min=forest[r][c];
//diagnols
	if(r+1<m && c+1 <n)	{
		if(forest[r+1][c+1] == 0) {
			forest[r+1][c+1]=min+1;
			flag=0;
		}
	}
	if(r-1>=0 && c-1 >=0)	{
		if(forest[r-1][c-1] == 0) {
			forest[r-1][c-1]=min+1;
			flag=0;
		}
	}
	if(r-1>=0 && c+1 <n)	{
		if(forest[r-1][c+1] == 0) {
			forest[r-1][c+1]=min+1;
			flag=0;
		}
	}
	if(r+1<m && c-1 >=0)	{
		if(forest[r+1][c-1] == 0) { 
			forest[r+1][c-1]=min+1;
			flag=0;
		}
	}
//up,down,l,r
	if(r+1 < m)	{
		if(forest[r+1][c] == 0) {
			forest[r+1][c]=min+1;
			flag=0;
		}
	}
	if(r-1 >= 0){	
		if(forest[r-1][c] == 0) {
			forest[r-1][c]=min+1;
			flag=0;
		}
	}
	if(c-1 >= 0)	{
		if(forest[r][c-1] == 0) {
			forest[r][c-1]=min+1;
			flag=0;
		}
	}
	if(c+1 < n)	{
		if(forest[r][c+1] == 0) {
			forest[r][c+1]=min+1;
			flag=0;
		}
	}
	
}


int main()
{
	long long int i,j,r,c;
	scanf("%lld",&m);
	scanf("%lld",&n);
	scanf("%lld",&r);
	scanf("%lld",&c);
	
	long long int forest[m][n];
	char ch;
	
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			scanf(" %c", &ch);
			if(ch == 'W')
				forest[i][j] = -1;
			else if(ch == 'T')
				forest[i][j]= 0;
			
		}
	}
	forest[r-1][c-1]=1;
	fire(forest,r-1,c-1);
	i=0;
	
	long long int max=forest[r-1][c-1];
	while(i<m) {
		for(j=0;j<n;j++) {
			if(forest[i][j] == 0)
				flag=1;
			if(forest[i][j] > 0) {
				fire(forest,i,j);
			}
			
			if(forest[i][j] > max)
				max=forest[i][j];
		}
		i=i+1;
		if(i == m)
		{
			if(flag == 1){
			i=0,flag=0;
			}
		}	
	}
	printf("%lld\n",max);	
	
}
			
