#include<iostream>
#include<string.h>

using namespace std;

class String
{
	char s[30];

	public:

	String()
	{
		strcpy(s, "\0"); 
	}

	String(char str[30])
	{
		strcpy(s, str);
	}

	String operator=(String); 
	String operator+(String); 
	void display();
};


String String::operator=(String s2)
{
	strcpy(s, s2.s);

	return *this;
}

String String::operator+(String s2)
{
	strcat(s, s2.s); 

	return *this;
}

void String::display()
{
	cout<<s<<endl;
}


int main(void)
{
	system("CLS");
	String s1; 
	String s2("Well Done!");
	cout<<"String s1\n\n";
	cout<<"String s2\n\n";
	s2.display();

	String s3;
	s3=s2;
	s1=s2;
	cout<<"Copied String s3\n\n";
	s3.display();

	s1=s3+s2;

	cout<<"Concatened string s1\n\n";

	s1.display();


	return 0;
}
