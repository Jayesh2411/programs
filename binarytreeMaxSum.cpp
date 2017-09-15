#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int findMax(int tree[],int n){
	static int maxSum=0;
	int current=0;
	int i,j,l,r,ls,rs,root;
	if(n == 0)
		return 0;
	if(n==1)
		return tree[0];
	ls=0;
	int total=0;
	for(i=n;i>=1;i-=2){
			
			ls=tree[i]+current;
			if(i+1<=n)
				rs=tree[i+1]+current;
			else rs=0;
			root=i/2;
			if(root == 0)
				break;
			printf(" Root:%d Left Sum: %d Right Sum:%d\n",tree[root],ls,rs);
			if(rs<0 && ls <0)
                		current=tree[root];
	       		else
        	        	current=max(tree[root],max(ls+tree[root],tree[root]+rs));
			maxSum=max(tree[root],max(current,ls+rs+tree[root]));
			
			printf("Max:%d",maxSum);
	}
	return current;
}

int main(){
	int i,j;
	int tree[11];
	time_t t;
	srand((unsigned)time(&t));
	tree[0]=0;
	for(i=1;i<=10;i++){
		tree[i]=rand()%10;
		printf(" %d ",tree[i]);
	}
	cout<<"\nMaxSum:"<<findMax(tree,10)<<endl;
}
