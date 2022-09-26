#include<iostream.h>
#include<conio.h>
#include<string.h>

class  string
{
	public:
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

		int operator >=(string s2)
		{
			int x;
			x=strcmp(str,s2.str);
			return x;
		}
		void operator +(string s2)
		{
			strcat(str,s2.str);
		}
};
void main()
{
	string s1,s2;
	clrscr();

	s1.get();
	s2.get();
	cout<<"\n Joined two string -> ";
	s1+s2;
	s1.put();
	int x;
	cout<<"\n\n  Compaired two string \n ";
	x=s1>=s2;
	if(x==0)
	{
		cout<<" Both are same ";
	}
	else if(x>=1)
	{
		cout<<" String A is big ";
	}
	else
		cout<<" String B is big";


	getch();

}