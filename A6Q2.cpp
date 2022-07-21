#include<iostream>
using std::cout;
using std::cin;
using std::endl;
class Float
{
    float *array;
    int size;
    public:
    Float()
    {
        size=1;
        array=new float[size];
    }
    Float(int s)
    {
        size=s;
        array= new float[size];
    }
   
    friend std::istream & operator >> (std::istream & in, Float &a)
        {
            cout<<"\nEnter the value of array:"<<endl;
            for(int i=0;i<a.size;i++)
            in>>a.array[i];
            return in;
        }
    friend std::ostream & operator <<(std::ostream & out, Float &b)
        {
            for(int i=0;i<b.size;i++)
            out<<b.array[i]<<"  ";
            cout<<endl;
            return out;
        }
    Float operator ++();
    float & operator[](int n)
    {
        return array[n];
    }
    ~Float()
    {
        delete[] array;
    }
   
   
};
Float Float ::operator++()
{
    Float temp;
    temp.size=size;
    for(int i=0;i<size;i++)
    {
        temp.array[i]=++array[i];
    }
    return temp;
}
int main()
{
    Float a(10),b;
    cin>>a;
    b=++a;
    cout<<b;
    b[3]=0.01;
    a[8]=0.345;
    cout<<b[3]<<"\n";
    cout<<a[8]<<"\n";
    return 0;
}