#include<iostream>
using namespace std;
class DB;

    class DM
    {   
        double m, cm;
        public:
        
        void read()
        {
            cout<<"Enter distance in meter and centimetre: ";
            cout<<"\nIn metre: ";
            cin>>m;
            cout<<"In centimetre: ";
            cin>>cm;
        }
            friend void add(DM, DB);
    };

    class DB
    {
        double feet, inches;
        public:
            friend void add(DM, DB);

        void read()
        {
            cout<<"Enter distance in feet and inches: ";
            cout<<"\nIn feet: ";
            cin>>feet;
            cout<<"In inches: ";
            cin>>inches;
        }
    };

void add(DM dm, DB db)
{
    double d1,d2;

    d1=dm.m+(db.feet)/3.281;
    d2=dm.cm+(db.inches)*2.54;
    cout<<"\nAddition of metre and feets is: "<<d1<<" m";
    cout<<"\nAddition of centimetres and inches is: "<<d2<<" cm";
    
}

int main()
{
    DM dm;
    dm.read();
    DB db;
    db.read();
    add(dm, db);
}