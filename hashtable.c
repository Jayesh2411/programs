#include<stdio.h>
struct pair{
    int val;
    int key;
};

int main()
{
    int i,temp;
    struct pair hash_table[5];
    for(i=0;i<5;i++){
        scanf("%d",&temp);
        hash_table[temp%5].val=temp;
        hash_table[temp%5].key=temp%10;
    }
    printf("Value \t key\n");
    for(int i=0;i<5;i++){
        printf("\n%d \t %d ",hash_table[i].val,hash_table[i].key);
    }

}
