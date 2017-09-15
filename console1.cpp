#include<iostream>
#include<cstdlib>
#include <fstream>
using namespace std;
int main()
{
  char a[5],b[5],filename[10],x[5];
	int flag1=0;
	ofstream myfile;
	cin>>filename;
	
	myfile.open (filename);
		cin>>x;
		
		myfile<<x<<"\n";
		cin>>x;
		myfile<<x;;
		
		myfile.close();
	ifstream infile;
	infile.open(filename);
		infile>>a;
	
		infile>>b;

	if((a[0] >= 'a' && a[0]<='z')	|| (b[0] >= 'a' && b[0]<= 'z'))
		flag1=11;
	int i,j;
		i=atoi(a);
		j=atoi(b);
      
	if(flag1 == 11)
		cout<<"Invalid Input";	
	else	
	{
		int sum=(int)(i+j);
		cout<<sum;
	}
	//infile.close();
}
