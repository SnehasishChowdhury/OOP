#include<iostream>
using namespace std;

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
            cout<<"Price: "<<price;
        }
        
};

class book: virtual public publication
{   
    protected:
        int page_count;

    public:
        void getdata()
        {
            publication::getdata();
            cout<<"Enter the number of pages: ";
            cin>>page_count;
        }
        void putdata()
        {
            publication::putdata();
            cout << "Pages: " <<page_count;
        }

};

class audio: virtual public publication
{   
    protected:
        float time;

    public:
        void getdata()
        {
            publication::getdata();
            cout<<"Enter the playing time in minutes: ";
            cin>>time;
        }
        void putdata()
        {
            publication::putdata();
            cout<<"Time: "<<time;
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

