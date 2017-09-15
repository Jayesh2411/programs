#include <iostream>
using namespace std;
int left(int,int);
int min(int,int);
int main(){
int N,Demand,litres,L,L10,L7,L5; //N=cases check
cout<<"Enter the number of Cases ";
cin>>N;
for(int i=0;i<N;i++){
 cout<<"Enter the litres of Milk: ";
cin>> Demand;

int const required=Demand;
//for 10 litres
litres= Demand/10;
L=litres;
litres*=10;
Demand-=litres;
L10=left(Demand,L);

//for 7 litres
Demand=required; //reset demand
litres= Demand/7;
L=litres;
litres*=7;
Demand-=litres;
L7=left(Demand,L);

//for 5 litres

Demand=required; //reset demand
litres= Demand/5;
L=litres;
litres*=5;
Demand-=litres;
L5=left(Demand,L);


cout<<min(L5,min(L10,L7))<<" Bottles required n";
}

return 0;
}

int left(int Demand,int L){
 int left;
switch (Demand){
case 0: left=0;
 break;
case 1: left=1;
 break;
case 2: left=2;
 break;
case 3: left=3;
 break;
case 4: left=4;
 break;
case 5: left=1;
 break;
case 6: left=2;
 break; 
case 7: left=1;
 break;
case 8: left=2;
 break;
case 9: left=3;
 break;
}
L+=left;
return L;
}

int min(int a,int b){
if (a<b)
return a;
else
return b;
}
