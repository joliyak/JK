#include<iostream.h>
#include<conio.h>

class demo
{
	public :
		int x,y;
		friend istream &operator >>(istream & in, demo &d)
		{
			cout<<"\n Enter Value of X ->";
			in>>d.x;
			cout<<"\n Enter Value of Y ->";
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

