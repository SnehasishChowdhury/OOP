#include <iostream>
#include <vector>
using namespace std;

class Vector
{
    vector<float> v;

public:
    Vector(){};
    void insert()
    {
        float n;
        cout << "Enter the number of elements : ";
        int a;
        cin >> a;
        cout << "Enter the vector elements : " << endl;
        for (int i = 0; i < a; i++)
        {
            cin >> n;
            v.push_back(n);
        }
    }
    void multiply()
    {
        int x;
        cout << "Enter the scalar value : ";
        cin >> x;
        for (int i = 0; i < v.size(); i++)
        {
            cout << x * v[i] << "\t";
        }
        cout << endl;
    }
    void modify()
    {
        float x, y;
        cout << "Enter the value to modify : ";
        cin >> x;

        for (int i = 0; i < v.size(); i++)
        {
            if (x == v[i])
            {
                cout << "Enter the new value : ";
                cin >> y;
                v[i] = y;
            }
        }
    }

    void display()
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << "\t";
        }
        cout << endl;
    }

    void add()
    {   
        float n;
        cout << "Enter the number of new elements : ";
        int a;
        cin >> a;
        cout << "Enter the vector elements : " << endl;
        for (int i = 0; i < a; i++)
        {
            cin >> n;
            v.push_back(n);
        }

        v.reserve( v.size() + v.size() ); 
        //v.insert( v.end(), v.begin(), v.end() );
        //v.insert( v.end(), v.begin(), v.end() );
    }
};

int main()
{   
    system("CLS");
    int choice;
    Vector vect;
    
    while(1)
    {
        cout<<"\nPLAYING WITH VECTORS\n";
        cout<<"1. Create the vector\n";
        cout<<"2. Modify the vector\n";
        cout<<"3. Multiply with scalar\n";
        cout<<"4. Display vector\n";
        cout<<"5. Add two vectors\n";
        cout<<"6. Exit\n";
        cout<<"\nEnter you choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1: vect.insert();
                    break;
            case 2: vect.modify();
                    break;
            case 3: vect.multiply();
                    break;
            case 4: vect.display();
                    break;
            case 5: vect.add();
                    break;
            case 6: exit(0);

        }
    }
    return 0;
}