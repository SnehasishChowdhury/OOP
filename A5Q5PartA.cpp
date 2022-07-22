#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


using namespace std;

class books
{
	char author_name[20];
	char title[20];
	int price;
	char publisher[20];
	int copies;

	public:	


	void setData()
	{
		cout<<"Enter the following Details: " <<endl<<"Authors Name: "<<endl;
		fgets(author_name,sizeof(author_name),stdin);
		cout<<"Title: "<<endl;
		fgets(title,sizeof(title),stdin);
		cout<<"price: "<<endl;
		cin>>price;
		cin.ignore();
		cout<<"Publisher: "<<flush<<endl;
		fgets(publisher,sizeof(publisher),stdin);
		cout<<"Enter the number of the copies"<<endl;
		cin>>copies;
	}

	void check()
	{
		char t[20],aut[20];
		int cop;
		cout<<"Enter the following details to search for the book"<<endl;
		cin.ignore();
		cout<<"Title of the book"<<flush<<endl;
		fgets(t,sizeof(t),stdin);
		cout<<"Enter the name of the author"<<endl;
		fgets(aut,sizeof(aut),stdin);
		cout<<"Enter the number of copies required"<<endl;
		cin>>cop;
		if(strcmp(t,title)==0 && strcmp(aut , author_name)==0 &&(cop<=copies))
		{

			cout<<"The book is available in the store"<<endl<<"The tota bill is"<<cop*price<<endl;
			copies=cop;
			
		}
		else
		{
			cout<<"The book is not available"<<endl;
		}
	}
};



int main()
{
	books Book;
	Book.setData();
	Book.check();
	getch();
	return 0;

}

