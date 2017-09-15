#include <stdio.h>
#include<math.h>
int nthPime(int index){
  //Write your program here.
	int p;
	int prime[500000];
	for(p=0;p<500000;p++)
		prime[p]=1;

	for ( p=2; p*p<=500000; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == 1)
        {
            // Update all multiples of p
            for (int i=p*2; i<=500000; i += p)
                prime[i] = 0;
        }
    }
	int prime_store[500000];
	int i=0;
	for (int p=2; p<=500000; p++)
       		if (prime[p])
          	 prime_store[i++]=p;
	return prime_store[index-1];
}

void main() {

  if(nthPime(1) == 2 &&
     nthPime(10) == 29 &&
     nthPime(100) == 541 &&
     nthPime(1000) == 7919 &&
     nthPime(10000) == 104729)
    printf("SUCCESS \n");
  else
    printf("FAILURE \n");
}
