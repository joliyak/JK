#include<iostream.h>
#include<conio.h>
#include<string.h>

class string
{
	public :
		char str[10];
		void get()
		{
			cout<<"\n enter the string :- ";
			cin>>str;

		}
		void put()
		{
			cout<<"\n string is : "<<str;

		}

		int  operator == (string s2)
		{
			int x;
			x=strcmp(str,s2.str);
			return x;

		}

};

void main()
{
	string s1,s2;
	int x;
	clrscr();

	s1.get();
	s2.get();
	x=s1==s2;
	if(x==0)
		cout<<"\n both are same ";
	else if(x>=1)
		cout<<"\n a is big ";
	else
		cout<<"\n b is big ";

	getch();
}