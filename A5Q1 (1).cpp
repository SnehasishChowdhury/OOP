#include<iostream>
using namespace std;

class Bank
{
    char name[20];
    int accno;
    char type[20];
    int bal;

    public:
        void initialize()
        {
            cout<<"Enter Name of the Depositor: ";
            gets(name);
            cout<<"Enter Account Number: ";
            cin>>accno;
            cin.ignore();
            cout<<"Enter Type of Account: "<<flush;
            gets(type);
            cout<<"Enter balance amount in account: ";
            cin>>bal;
        }
        void deposit()
        {
            int dep;
            cout<<"\nEnter amount you want to deposit: ";
            cin>>dep;
            bal = bal + dep;
        }
        void withdraw()
        {
            int with;
            cout<<"\nYour current balance is: "<<bal;
            cout<<"\nEnter amount you wish to withdraw: ";
            cin>>with;
            bal = bal - with;
        }
        void display()
        {
            cout<<"\nName of the Depositor: ";
            puts(name);
            cout<<"Balance: "<<bal<<endl;
        }
};
int main()
{   
    system("CLS");
    int choice;
    Bank bank;
    bank.initialize();

    while(1)
    {
        cout<<"\nBANK OF CPP\n";
        cout<<"1. Display your bank details\n";
        cout<<"2. Deposit amount\n";
        cout<<"3. Withdraw amount\n";
        cout<<"4. Exit\n";
        cout<<"Enter you choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1: bank.display();
                    break;
            case 2: bank.deposit();
                    break;
            case 3: bank.withdraw();
                    break;
            case 4: exit(0);

        }
    }
    return 0;
}