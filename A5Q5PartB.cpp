#include <iostream>
#include <string.h>
using namespace std;

class books
{
private:
    char *author, *title, *publisher;
    float price;
    int stock;

    void update()
    {
        cout << "\nEnter the new price: ";
        cin >> price;
    }

    static int successful;
    static int un_successful;

public:
    books()
    {
        author = new char[50];
        title = new char[50];
        publisher = new char[50];
        price = 0.0;
        stock = 0;
    }

    void display();
    void getdata();
    int search(char *s_title);
    void buy();
    void edit();

    static void trans()
    {
        cout << "\nNo. of successful transaction: " << successful << endl;
        cout << "No. of unsuccessful transaction: " << un_successful << endl;
    }
};

int books ::successful = 0;
int books ::un_successful = 0;

void books ::buy()
{
    int qt;
    char ch;

    cout << "\nEnter the no. of books you want to buy: ";
    cin >> qt;

    if (qt <= stock)
    {
        cout << "\nYour total price: Rs. " << qt * price << endl;
        cout << "Want to buy the book(y/n): ";
        cin >> ch;
        if (ch == 'y')
        {
            successful++;
            stock -= qt;
        }

        else
        {
            un_successful++;
        }
    }

    else
    {
        cout << "\nRequested number of copies are not avaiable !" << endl;
    }
}

int books ::search(char *s_title)
{
    if (strcmp(title, s_title) == 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

void books ::getdata()
{
    cin.ignore();

    cout << "\nTitle: ";
    cin.getline(title, 50);

    cout << "Author: ";
    cin.getline(author, 50);

    cout << "Publisher: ";
    cin.getline(publisher, 50);

    cout << "Price: ";
    cin >> price;

    cout << "Stock: ";
    cin >> stock;
}

void books ::display()
{
    cout << "\nTitle: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: Rs. " << price << endl;
    cout << "Stock: " << stock << endl;
}

void books ::edit()
{
    update();
}

int main()
{
    int n;
    cout << "\nEnter number of books for entry: ";
    cin >> n;
    books bk[n];

    cout << "\nFill up the information: " << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        bk[i].getdata();
    }

    int ch;
    char s_title[50];
    int flag = 0;

    while (1)
    {
        cout << "\n1. Display\n2. Buy a Book\n3. Edit data\n4. Displat total no. of Transaction\n5. Exit\nEnter any option: ";
        cin >> ch;
        switch (ch)
        {
        case 1:

            for (size_t i = 0; i < n; i++)
            {
                cout << "\nBook " << i + 1 << endl;
                bk[i].display();
                cout << endl;
            }

            break;

        case 2:
            cin.ignore();

            cout << "\nEnter Title of the book: ";
            cin.getline(s_title, 50);

            for (size_t i = 0; i < n; i++)
            {
                flag = bk[i].search(s_title);

                if (flag == 1)
                {
                    cout << "\nBook Found" << endl;
                    bk[i].display();
                    bk[i].buy();
                    break;
                }
            }

            if (flag == 0)
            {
                cout << "\nNot Found" << endl;
            }

            break;

        case 3:

            cin.ignore();

            cout << "\nEnter Title of the book: ";
            cin.getline(s_title, 50);

            for (size_t i = 0; i < n; i++)
            {
                flag = bk[i].search(s_title);

                if (flag == 1)
                {
                    cout << "\nBook Found" << endl;
                    bk[i].display();
                    bk[i].edit();
                    break;
                }
            }

            if (flag == 0)
            {
                cout << "\nNot Found" << endl;
            }

            break;

        case 4:
            books ::trans();
            break;

        case 5:
            exit(0);
            break;

        default:
            cout << "\nINVALID INPUT" << endl;
            break;
        }
    }

    return 0;
}