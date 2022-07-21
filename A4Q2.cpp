#include<iostream>
#include<conio.h>
using namespace std;

#define Esc 27
#define k1 49
#define k2 50

class tollBooth{
    unsigned int totalCar;
    double totalMoney;

    public:
    tollBooth()
    {
        totalCar=totalMoney=0;
    }
    void payingCar()
    {
        totalCar++;
        totalMoney+=250;

    }
    void nonpayCar()
    {
        totalCar++;
    }
    void display()
    {
        cout<<"\nTotal number of cars passing by: "<<totalCar<<endl;
        cout<<"Total money collected: "<<totalMoney;
    }
};

int main()
{   
    tollBooth op;
    char n;

    while(1)
    {
    cout<<"\n\nWELCOME TO THE TOLLBOOTH!\n\n";
    cout<<"Press 1 for a paying car to pass.\n";
    cout<<"Press 2 for a non-paying car to pass\n";
    cout<<"Press Esc to display all information and exit\n";
    
    cout<<"\nEnter your choice: ";
    n=getch();
    
    switch(n)
        {
            case k1: op.payingCar();
                    break;
            case k2: op.nonpayCar();
                    break;
            case Esc: op.display();
                    return 0;
        }
    }
}