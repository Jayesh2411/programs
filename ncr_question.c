#include <stdio.h>
#include <stdlib.h>

long long nCr(int n, int r) {
  // Write your code here.
	
	if(r>n/2)
		r=n-r;
	long long int sum=1;
	
	for(int i=1;i<=r;i++){
		sum=sum*(n-r+i);
		
		sum=sum/i;
	}
	return sum;
	
}

int main() {

  if(nCr(100, 99) == 100 &&
     nCr(1000, 998) == 499500 &&
     nCr(100, 2) == 4950 &&
     nCr(50, 5) == 2118760 &&
     nCr(50, 0) == 1)
    printf("SUCCESS \n");
  else
    printf("FAILURE \n");
       
}
