#include<iostream.h>
#include<conio.h>

class multiplication
{
	public:
	void multi(int a,int b)
	{
		cout<<"\nMulti of 2 No. ->"<<a*b;
	}
	void multi(int a,int b,int c)
	{
		cout<<"\nMulti of 3 No. ->"<<a*b*c;
	}
	void multi(int a,int b,int c,int d)
	{
		cout<<"\nMulti of 4 No. ->"<<a*b*c*d;
	}
};
void main()
{
	clrscr();
	multiplication m;
	m.multi(2,3);
	m.multi(2,3,4);
	m.multi(2,3,4,5);
	getch();
}