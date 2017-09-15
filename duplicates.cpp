#include<string>
#include<vector>
#include<map>
#include<iostream>

using namespace std;
int main()	{
	map <int,int> m;
	vector <int> v;
	int i,j,n=8;
	for(i=0;i<n;i++){
		cin>>j;
		v.push_back(j); 
	}
	j=0;
	vector<int> :: iterator it;
	it=v.begin();
	for(i=0;i<n;i++){
		if(m[v[i]]>0)
			v.erase(it);
		else
			m[v[i]]=i+1;
		if(it == v.end())
			break;
		it++;
	}
			

	 for(it=v.begin();it!=v.end();it++){
		cout<<*it<<endl;
		
        }
	


}




