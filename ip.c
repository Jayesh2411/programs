#include<stdio.h>
#include<math.h>

int main()	{
		long long int total = 0;
		int i;
		long long int seg =0;
	for( i =0;i<32;i++)	{

		seg = 1;
		int j;
		for( j =0;j<i;j++)	{
			seg = seg*2;
		}
		total = total+seg;
	}
	printf("\n Total : %lli ",total);

}

