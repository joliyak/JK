#include<iostream.h>
#include<conio.h>

class unary
{
	public:
		int x;
		unary()
		{
			x=9;
		}
		void operator ++()
		{
			x++;
		}
};
void main()
{
	clrscr();
	unary u;
	u++;
	cout<<u.x;
	getch();
}