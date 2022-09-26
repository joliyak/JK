#include<iostream.h>
#include<conio.h>
#include<string.h>

class string
{
	public :
		char str[10];
		void get()
		{
			cout<<"\n Enter the String -> ";
			cin>>str;
		}
		void put()
		{
			cout<<str;
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
		cout<<"\n Both are same ";
	else if(x>=1)
		cout<<"\n First string is big ";
	else
		cout<<"\n Second string is big ";

	getch();
}