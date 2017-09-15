#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	int d1;
	int d2;	
	d1=0;
	d2=0;
	cout<<"Enter order:";
	
	cin>>n;
	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		d1=d1+arr[i][i];
	}
	for(j=n-1;j>=0;j--)
	{
		d2=d2+arr[j][j];
	}
	cout<<d1<<" "<<d2;
}
