#include<iostream>
using namespace std;

    class DM
    {   
        public:
        double m, cm;

        void read()
        {
            cout<<"Enter distance in meter and centimetre: ";
            cin>>m>>cm;
        }
    };
    class DB
    {
        public:
        double feet, inches;
            friend DM add(DM, DB);

        void read()
        {
            cout<<"Enter distance in feet and inches: ";
            cin>>feet>>inches;
        }
    };

DM add(DM dm, DB db)
{
    double d1,d2;

    d1=dm.m+(db.feet)/3.281;
    d2=dm.cm+(db.inches)*2.54;
    cout<<"\nmeter + feet = "<<d1<<" m";
    cout<<"\ncentimeter + inches = "<<d2<<" cm";
    return dm;
}
int main()
{
    DM dm;
    dm.read();
    DB db;
    db.read();
    add(dm, db);
}