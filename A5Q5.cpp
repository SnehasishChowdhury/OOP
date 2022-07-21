#include<iostream>
#include<string.h>
using namespace std;

class Book
{
    char author[20], title[20], publisher[20];
    int price, stock;
    public:
        static int trans, s, un;
        Book() 
        {
            trans++;
        }
        void Details()
        {
            cout<<"\nEnter the details ";
            cout<<"\nAuthor: ";
            gets(author);
            cout<<"Title: ";
            gets(title);
            cout<<"Publisher: ";
            gets(publisher);
            cout<<"Price: ";
            cin>>price;
            cout<<"Stock Available: ";
            cin>>stock;
            cin.ignore();
        }
        void Check()
        {
            char at[20], t[20];
            int n;

            cout<<"\nEnter the details to search for: ";
            cout<<"\nTitle: ";
            gets(t);
            cout<<"Author: ";
            gets(at);

            if(strcmp(t, title)==0 && strcmp(at, author)==0)
            {
                cout<<"\nBook Available";
                cout<<"\nEnter the number of copies required: ";
                cin>>n;
                    if(n<=stock)
                    {   
                        cout<<"\nStock Available: "<<stock;
                        price = price*n;
                        cout<<"\nTotal Cost: "<<price;
                        stock=stock-n;
                        cout<<"\nStock Available after transaction: "<<stock;
                    }
                    else
                    {
                        cout<<"\nRequired copies not in stock";
                    }
                    s++;
            }
            else
            {
                cout<<"\nBook not avaialble";
                un++;
            }
        }
        void transaction()
        {
            cout<<"Total number of transactions: "<<Book::trans;
            cout<<"\nSuccessful transactions: "<<Book::s;
            cout<<"\nUnsuccessful transactions: "<<Book::un;
        }
};
int Book::trans = 0;
int Book::s = 0;
int Book::un = 0;

int main()
{
	Book Book;
	system("CLS");
    int choice;

    while(1)
    {
        cout<<"\n\nBOOK SHOP\n";
        cout<<"1. Enter book details\n";
        cout<<"2. Buy a book\n";
        cout<<"3. Display number of transactions\n";
        cout<<"4. Exit\n";
        cout<<"Enter you choice: ";
        cin>>choice;
        cout<<endl;
        cin.ignore();

        switch(choice)
        {
            case 1: Book.Details();
                    break;
            case 2: Book.Check();
                    break;
            case 3: Book.transaction();
                    break;
            case 4: exit(0);

        }
    }
    return 0;
}