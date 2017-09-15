#include <stdio.h>

int main()
{
    int n,q;
    scanf("%d %d",&n,&q);
   int skill[n];
   int i;
   for(i=0;i<n;i++) {
       scanf("%d ",&skill[i]);
   }
   int op1[q][3];
   int op2[q][2];
for(i=0;i<3;i++){
        op1[i][0]=0;
        op1[i][1]=0;
        op1[i][2]=0;
        
        op2[i][0]=0;
        op2[i][1]=0;
}
   int op[q];
   
   int f,c=0,j=0;
   
   for(i=0;i<q;i++) {
        scanf("%d",&f);
        op[i]=f;
        if(f==1){
            j=0;
                scanf("%d %d %d",&op1[i][j],&op1[i][j+1],&op1[i][j+2]);
            }
        
        else if(f == 2)
        {
                j=0;
                scanf("%d %d ",&op2[i][j],&op2[i][j+1]);
        }
   }
   
   
   int sum=0,a=0,l=0,r=0,k=0,e=0,w=0;
   for(i=0;i<q;i++){
       sum=0;
       if(op[i]==1){
        l=op1[i][0],r=op1[i][1],k=op1[i][2];
           for(j=l-1;j<r;j++){
                if(k<=j)
                    e=j-k;
                else
                    e=0;
               for(a=j;a>=e;a--){
                   sum=sum+skill[a];
               }
           }
           printf("\n%d",sum);
       }
       else if(op[i]==2){
            w=op2[i][0];
          skill[w]=op2[i][1];
       }
       }
   
    return 0;
}

