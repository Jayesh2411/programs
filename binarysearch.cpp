#include<iostream>
#include<vector>

using namespace std;

int main()	{

	vector <int> v;
	int i,j,mid;
	
	int t;
	for(int k=0;k<=5;k++){
		cin>>t;
		v.push_back(t);
	}
	for(i=0;i<v.size();i++){
		for(j=0;j<v.size()-1-i;j++){
			if(v[j] > v[j+1]){
				t=v[j];
				v[j]=v[j+1];
				v[j+1]=t;
			}
		}
	}
	i=0;
	j=v.size();
	mid=(i+j)/2;
	cout<<"Enter Search:"<<endl;
	cin>>t;
	while(i<j)	{
		if(v[mid]>t){
			j=mid;
		}
		else if(v[mid]<t){
			i=mid+1;
		}
		else if(v[mid] == t){
			cout<<"Found!";t=-1;break;}
		mid=(i+j)/2;
	}
	if(t>=0)
		cout<<"Not Found";
}
