#include<iostream.h>
#include<conio.h>

class demo
{
	public :
		int x,y;

		friend istream &operator >>(istream & in, demo &d)
		{
			cout<<"\n enter the x : ";
			in>>d.x;

			cout<<"\n enter the y : ";
			in>>d.y;

			return in;

		}
		friend ostream &operator <<(ostream & out,demo &d)
		{
			out<<d.x<<endl;
			out<<d.y<<endl;

			return out;
		}


};

void main()
{
	demo d1;
	clrscr();

	cin>>d1;
	cout<<d1;

	getch();

}

