#include<iostream.h>
#include<conio.h>
#include<string.h>

class  string
{
	public:
		char str[10];
		void get()
		{
			cout<<"\n enter the string : ";
			cin>>str;

		}
		void put()
		{
			cout<<" string is : "<<str;

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
	cout<<"\n join two string : ";
	s1+s2;
	s1.put();
	int x;
	cout<<"\n\n  compair two string : ";
	x=s1>=s2;
	if(x==0)
	{
		cout<<" both are same : ";
	}
	else if(x>=1)
	{
		cout<<" string a is big : ";
	}
	else
		cout<<" string b is big";


	getch();

}