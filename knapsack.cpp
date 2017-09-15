#include<bits/stdc++.h>
using namespace std;
int knapsack(int W,int wt[],int val[],int n){
	if(W== 0 || n==0)
		return 0;
	if(wt[n-1]<=W)
		return max(val[n-1]+knapsack(W-wt[n-1],wt,val,n-1),knapsack(W,wt,val,n-1));
	else
		return knapsack(W,wt,val,n-1);
}
int dp(int W,int wt[],int val[],int n){
	int dp[n+1][W+1];
	int i,j,k;
	for(i=0;i<=n;i++){
		for(j=0;j<=W;j++){
			   if(i == 0 || j == 0){
                   		 dp[i][j] = 0;
                    		continue;
                	   }
                	if(j - wt[i-1] >= 0){
               		     dp[i][j] = max(dp[i-1][j], dp[i-1][j-wt[i-1]] + val[i-1]);
                	}else{
                    	     dp[i][j] = dp[i-1][j];
                	}		
		}
	}
	return dp[n][W];
}

int main(){
	int W=50;
	int wt[]={10,20,30};
	int val[]={60,100,120};
	int n=3;
	cout<<"Max:"<<knapsack(W,wt,val,n)<<endl;
	cout<<"\nUsing DP:"<<dp(W,wt,val,n)<<endl;
}
