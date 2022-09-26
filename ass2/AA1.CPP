#include<iostream.h>
#include<conio.h>

class unary
{
	public:
		int x;
		int y;
		unary()
		{
			x=10;
			y=20;
		}

		void put()
		{
			cout<<"\n x is :"<<x;
			cout<<"\n y is :"<<y;

		}

		void operator ++()
		{
		    x++;
		    y++;


		}
		void operator --()
		{
		    x--;
		    y--;

		}



};

void main()
{
	unary u1,u2;
	clrscr();
	cout<<"\n real no :";
	u1.put();
	cout<<"\n addition :";
	++u1;
	u1.put();
	cout<<"\n subtration :";
	--u2;
	u2.put();

	getch();


}
