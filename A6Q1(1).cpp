#include <iostream>
using namespace std;

class Int
{
    int x;

public:
    Int()
    {
        x = 0;
    }
    Int(int a)
    {
        x = a;
    }
    Int operator+(Int &b)
    {
        Int tmp;
        tmp.x = x + b.x;
        return tmp;
    }

    Int operator+=(Int a)
    {
        this->x = this->x + a.x;
        return *this;
    }
    Int operator++(int)
    {
        Int tmp;
        tmp.x = x++;
        return tmp;
    }

    friend ::ostream &operator<<(ostream &out, Int &obj)
    {
        out << obj.x << endl;
        return out;
    }
};

int main()
{
    Int a(5), b(7), c;
    c = a + b;
    a += 1;
    c += b++;
    cout << a;

    return 0;
}