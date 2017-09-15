#include <stdio.h>

int steps_count=0;
int function_tower(int n,int a,int b,int c);
int main()
{
    int num_disk;
    printf("Application for solving Tower of Hanoi Problem programmed in C\nEnter the Number of Disks");
    scanf("%d",&num_disk);
    if(num_disk>=1)
    {       printf("\nThe Optimum way to move disks from Tower 1 to Tower 3 is given below:\n");
            function_tower(num_disk,1,2,3); 
            printf("\n\nOptimum Number of Steps = %d",steps_count);
                }
    else
    printf("INVALID!");
    
    return 0;
}
int function_tower(int n, int a, int b, int c)
{
     //this function puts disk from tower a to tower c 
     if(n==1)
     {
               printf("\nTower %d to Tower %d",a,c);
               steps_count++;
               return 0;
     }
     function_tower(n-1,a,c,b); //from tower a to b
     printf("\nTower %d to Tower %d",a,c);
     steps_count++;
     function_tower(n-1,b,a,c);
     return 0;
}

