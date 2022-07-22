#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
class bankaccount
{
    char name[20];
    unsigned int accnumber;
    char acctype[10];
    float balance;
    public:
    bankaccount()
    {
        strcpy(name,"null");
        accnumber=balance=0;
        strcpy(acctype,"null");
    }
    void initialise();
    void deposit();
    void withdraw();
    void display();
    int get_acno()
    {
        return accnumber;
    }
}customer[20];
    
void bankaccount::initialise()
    {
        cout<<"\n\nEnter the following details: ";
        cout<<"\nName: ";
        cin>>name;
        cout<<"Account Number: ";
        cin>>accnumber;
        cout<<"Account Type: ";
        cin>>acctype;
        cout<<"Opening Balance: ";
        cin>>balance;
    }

void bankaccount:: deposit()
    {
        int deposit;
        cout<<"\n\nDEPOSIT";
        cout<<"\nYour current acccount balance is: "<< balance;
        cout<<"\nEnter the amount you want to deposit:";
        cin>>deposit;
        balance=balance+deposit;
        cout<<"\nYou have successfully deposited "<<deposit<< " rupees";
        cout<<"\nYOU HAVE "<< balance << "rupees in your account";
    }

void bankaccount:: withdraw()
    {
        int withdraw;
        cout<<"\n\nWITHDRAWAL";
        cout<<"\nYour current acccount balance is:"<<balance;
        cout<<"\nEnter the amount you want to withdraw:";
        cin>>withdraw;
        if(balance>=withdraw)
        {
            balance=balance-withdraw;
            cout<<"\nYOU HAVE SUCCESSFULLY withdrawn "<<withdraw<< " rupees ";
        }
        else
        {
            cout<<"\nAMOUNT CANNOT BE WITHDRAWN";
            cout<<"\nYOU DON'T HAVE SUFFICIENT BALANCE IN YOUR ACCOUNT";

        }
        cout<<"\nYOU HAVE "<< balance << " rupees in your account";
    }

void bankaccount::display()
    {
        cout<<"ACCOUNT HOLDER NAME:"<<name;
        cout<<"\nACCOUNT BALANCE:"<<balance;
    }
int search()
{
    unsigned int acno;
    int i,n;
    cout<<"\nEnter the account number of the customer: ";
    cin>>acno;
    for(int i=0;i<n;i++)
    {
        if(customer[i].get_acno()==acno)
        {
            return i;
        }
    }
    if(i==n)
    return -1;
}

int main()
{
    system("CLS");
    int n,choice,i,s;
    cout<<"\n\nBANK ACCOUNT MANAGEMENT";
    cout<<"\nHow many customer details do you want to enter:";
    cin>>n;
    for( i=0;i<n;i++)
    {
        cout<<"\nEnter the details of customer number:"<<i+1;
        customer[i].initialise();
    }
    cout<<"\n";
        while(1)
        {
            cout<<"\n\n MAIN MENU ";
            cout<<"\n1.DEPOSIT";
            cout<<"\n2.WITHDRAW";
            cout<<"\n3.DISPLAY THE DETAILS";
            cout<<"\n4.EXIT";
            cout<<"\nEnter your choice:";
            cin>>choice;
            //choice=getch();
            switch(choice)
            {
                case 1: 
                        s=search();
                        if(s!=-1)
                        {
                            customer[s].deposit();
                        }
                        else
                        cout<<"\nINVALID ACCOUNT NO!!!!!";
                        break;
                case 2: 
                        s=search();
                        if(s!=-1)
                        {
                            customer[s].withdraw();
                        }
                        else
                        cout<<"\nINVALID ACCOUNT NO!!!!!";
                        break;
                case 3: 
                        s=search();
                        if(s!=-1)
                        {
                            customer[s].display();
                        }
                        else
                        cout<<"\nINVALID ACCOUNT NO!!!!!";
                        break;
                case 4:exit(0);
                default:cout<<"\nInvalid option.Please choose between 1-5!!!";
            }

        }
return 0;   

}
