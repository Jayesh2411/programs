#include<stdio.h>
int main()
{
  int i;
  long int n,a,b,c;
  long int x=1000000000;
  int t;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%ld%ld%ld",&a,&b,&c);
    c=c%6;
    switch(c)
    {
      case 1:
            n=a;
            break;
     case 2:
            n=b;
            break;
      case 3:
            n=b-a;
            break;
      case 4:
            n=-a;
            break;
      case 5:
            n=-b;
            break;
      case 0:
            b=a-b;
            break;
    }
    printf("%ld",n%(x+7));
  }
  return 0;
}
