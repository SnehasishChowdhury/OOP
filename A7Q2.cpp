#include<iostream>
using namespace std;

class sales
{   
    protected:
        float s1, s2, s3;
    public:
        void getdata()
        {
            cout<<"Enter the sales of: \n";
            cout<<"Month 1: ";
            cin>>s1;
            cout<<"Month 2: ";
            cin>>s2;
            cout<<"Month 3: ";
            cin>>s3;
        }
        void putdata()
        {
            cout << "\nMonth 1 sale: Rs." << s1 << endl;
            cout << "Month 2 sale: Rs." << s2 << endl;
            cout << "Month 3 sale: Rs." << s3 << endl;
        }
};

class publication
{   
    protected:
        string title;
        float price;

    public:
        void getdata()
        {
            cout<<"\nEnter the title of the book: ";
            cin>>title;
            cout<<"Enter the price: ";
            cin>>price;
        }
        void putdata()
        {
            cout<<"\nTitle: "<<title;
            cout<<"\nPrice: "<<price;
        }
        
};

class book: virtual public publication, public sales
{   
    protected:
        int page_count;

    public:
        void getdata()
        {   
            publication::getdata();
            sales::getdata();
            cout<<"Enter the number of pages: ";
            cin>>page_count;
        }
        void putdata()
        {
            publication::putdata();
            sales::putdata();
            cout << "\nPages: " <<page_count;
            cout<<endl;
        }

};

class audio: virtual public publication, public sales
{   
    protected:
        float time;

    public:
        void getdata()
        {
            publication::getdata();
            sales::getdata();
            cout<<"Enter the playing time in minutes: ";
            cin>>time;
        }
        void putdata()
        {
            publication::putdata();
            sales::putdata();
            cout<<"\nTime: "<<time;
        }
    
};

int main()
{
    book b;
    audio a;
    b.getdata();
    a.getdata();
    b.putdata();
    a.putdata();
    cout<<endl;
    return 0;
}

