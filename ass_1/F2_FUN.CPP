#include<iostream.h>
#include<conio.h>

class AREA
{
	public:
		void area(int r,int pi)
		{
			cout<<"\nArea of Circle ->"<<pi*r*r;
		}
		void area(int x)
		{
			cout<<"\nArea of Squer ->"<<x*4;
		}
		void area(int x,int b,int h)
		{
			cout<<"\nArea of Tringle ->"<<x*b*h;
		}
};
void main()
{
	AREA a;
	clrscr();
	a.area(20);
	a.area(13.4,4);
	a.area(3,4,5);
	getch();
}