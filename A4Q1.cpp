#include<iostream>
using namespace std;

class Int
{
    int intt;

    public:
    Int()
    {
        intt = 0;
    }
    Int(int a)
    {
        intt = a;
    }
    void print()
    {
        cout<<"\nFinal result: "<<intt<<endl;
    }
    Int add(Int b)
    {
        return(intt  + b.intt);
    }



};
int main()
{
    Int a(3), b(7);
    Int c;

    c=a.add(b);
    c.print();
}
