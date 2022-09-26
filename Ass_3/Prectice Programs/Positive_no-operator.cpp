#include<iostream.h>
#include<conio.h>

class POINEG
{
	public:
		int data;

		void get()
		{
			cout<<"\n enter the data : ";
			cin>>data;

		}

		void put()
		{
			cout<<"\n data is : "<<data;

		}

		operator ++()
		{
			data=-data;

		}

};
void main()
{
	POINEG p;
	clrscr();

	p.get();
	++p;
	p.put();

	getch();

}