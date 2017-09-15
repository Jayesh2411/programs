#include<iostream>
using namespace std;

class Student {
    public:
            string name;
            int roll;
    };



class Marks : public Student {
       public:
        int marks_sci;
        int marks_maths;
        int marks_eng;
};

class Result : public Marks {
	public:
   		int avg;
	public:
        	int total(int ,int , int );
};

int Result ::  total(int x, int y, int z)   {
        int total1;
        total1 = (x+y+z);
        avg=total1/3;
}

int main()  {
    Result std1;
    Result std2;
    Result std3;

    string name;

    int roll;
    int x,y,z;

    cout<<"Enter name and roll:\n";
    cin>>name;
    cin>>roll;

    std1.name=name;
    std1.roll=roll;

    cout<<"Enter marks: \n";
    cin>>x>>y>>z;
    std1.marks_sci=x;
    std1.marks_maths=y;
    std1.marks_eng=z;

    std1.total(std1.marks_eng,std1.marks_maths,std1.marks_sci);


    cout<<"Enter name and roll:\n";
    cin>>name;
    cin>>roll;

    std2.name=name;
    std2.roll=roll;

    cout<<"Enter marks: \n";
    cin>>x>>y>>z;

    std2.marks_sci=x;
    std2.marks_maths=y;
    std2.marks_eng=z;

    std2.total(std2.marks_eng,std2.marks_maths,std2.marks_sci);

    cout<<"Enter name and roll:\n";
    cin>>name;
    cin>>roll;

    std3.name=name;
    std3.roll=roll;

    cout<<"Enter marks: \n";
    cin>>x>>y>>z;
    std3.marks_sci=x;
    std3.marks_maths=y;
    std3.marks_eng=z;

    std3.total(std3.marks_eng,std3.marks_maths,std3.marks_sci);


    cout<<"Average for Student: "<<std1.name<< " "<<std1.avg<<endl;
   cout<<"Average for  Student: "<<std2.name<<" "<<std2.avg<<endl;
    cout<<"Average for  Student: "<<std3.name<<" "<<std3.avg<<endl;

	cout<<"Rank:\n";
    int i,j=0,temp=0;
    int rec[3];
    rec[0] = std1.avg;
    rec[1] = std2.avg;
    rec[2] = std3.avg;
    for(i=0;i<3;i++)
    {
	for(j=0;j<i;j++)	{
      		  if (rec[j]<rec[i])
            {
                temp = rec[j];
                rec[j] = rec[i];
                rec[i] = temp;
            }
   	 }
   }
	x=std1.avg,y=std2.avg,z=std3.avg;
    for(i=0; i<3; i++)
    {
	cout<<i<<" ";
	if(rec[i] == std1.avg)
		cout<<std1.name<<endl;
	else if (rec[i] == std2.avg)
		cout<<std2.name<<endl;
	else if (rec[i] == std3.avg)
		cout<<std3.name<<endl;
	else
		cout<<"\nNull";	
    }
}



