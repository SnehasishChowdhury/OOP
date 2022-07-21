#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class student{
		int r_no;
		char name[10];
		int marks1, marks2, marks3;
	public:
		void initialize();
		student()
                {
                        r_no=0;
                        marks1=marks2=marks3=0;
                        strcpy(name,"null");
                }

		int rollno()
		{
			return r_no;
		}
		float average()
		{
			return((marks1+marks2+marks3)/3);
		}
		float highest()
		{
		    int high;
		   
              if(marks1>marks2 && marks2>marks3){
                high=marks1;
              }
              if(marks2>marks1 && marks2>marks3){
                high=marks2;
              }
              else 
              {
                high=marks3;
              }
              
              return high;
		}
		void display();
		}st[10];

void student::initialize()
	{
		cout<<"\nRoll No: ";
		cin>>r_no;
		cout<<"Name: ";
		cin>>name;
		cout<<"Enter the marks: ";
		cout<<"\nPhysics: ";
		cin>>marks1;
		cout<<"Chemistry:";
		cin>>marks2;
		cout<<"Maths:";
		cin>>marks3;
	}
void student::display()
	{
		float avg, high;
		cout<<"\nSTUDENT RECORD";
		cout<<"\nRoll Number: "<<r_no;
		cout<<"\nName: "<<name;
		cout<<"\nMarks in Physics: "<<marks1;
		cout<<"\nMarks in Chemistry: "<<marks2;
		cout<<"\nMarks in Maths: "<<marks3;
		avg=average();
		cout<<"\nAverage Marks: "<<avg;
		high=highest();
		cout<<"\nHighest Marks: "<<high<<"\n";
	}
int main()
	{
		int n, i, roll;
		cout<<"\n\t\t\t HELLO THERE!";
		cout<<"\nEnter the number of students: ";
		cin>>n;
		cout<<"\nEnter the information of "<<n<<" students: ";
		for(i=0; i<n; ++i)
		{
			st[i].initialize();
		}
		cout<<"\nEnter the roll no of the student to display ";
		cin>>roll;
		for(i=0;i<n;++i)
		{
			if(st[i].rollno()==roll)
			st[i].display();
		}
	return 0;
}

