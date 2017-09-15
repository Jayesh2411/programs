
#include<bits/stdc++>
long long int  convertFive(long long int  n)
{
//Your code here
    long long int  a=0,c=0;
    long long int  i=0;
    while(n>0)  {
        a=n%10;
	
	if(a == 0)
        	i=i+pow(10,c)*5;
	else
		i=i+pow(10,c)*a;
	c++;
        n=n/10;
    }
    printf("%lld",i);
}

long long int  main()	{
	long long int  n;
	scanf("%lld",&n);
	convertFive(n);
}
