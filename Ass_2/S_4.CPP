#include<iostream.h>
#include<conio.h>
#include<string.h>

class String
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
		friend String operator +(String &s1, String &s2)
		{
			String s;
			strcat(s1.str,s2.str);
			return s;
		}
};
void main()
{
	String s1,s2,s3;

	clrscr();

	s1.get();
	s2.get();
	s3=s1+s2;
	s1.put();

	getch();

}