#include<iostream>
#include<map>
#include<utility>
#include<string.h>
using namespace std;

int main()	{
	map<string,long int> contacts;
	map<string,long int> :: iterator i;
	contacts["Jayesh"]=8961467985;
	contacts["Swati"]=9284848484;
	contacts["Sikha"]=9836705521;
	for(i=contacts.begin();i!=contacts.end();i++)
		cout<<(*i).first<<": "<<(*i).second<<endl;
	cout<<"Enter Search:";
	string s;
	cin>>s;
	i=contacts.find(s);
	if(i==contacts.end())
		cout<<"Not found";
	else
		cout<<i->second;

}
