#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	cin>>i;
	while(i--){
		int n;
		cin>>n;
		int input,index=0;
		int m=99999;
		for(int j=0;j<n;j++){
			cin>>input;
			if(m>input){
				m=input;
				index=j;
			}
		}
		cout<<index+1<<endl;
	}
}  
