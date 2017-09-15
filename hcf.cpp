#include<bits/stdc++.h>
using namespace std;
int hcf(int p,int q){
	int rem=p%q;
	if(rem==0)
		return q;
	else
		hcf(q,rem);
}
int main(){
	int p,q;
	cin>>p;
	cin>>q;
	if(q>p){
		p=p+q;
		q=p-q;
		p=p-q;
	}
	cout<<hcf(p,q);
}
	
