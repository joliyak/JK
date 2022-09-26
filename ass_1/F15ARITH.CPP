#include<iostream.h>
#include<conio.h>

class baby
{
	public:
		int a,b;
		baby()
		{
			a=10;
			b=2;
		}
		inline void sum()
		{
			cout<<"\nSum ->"<<a+b;
		}
		inline void sub()
		{
			cout<<"\nSubtrack ->"<<a-b;
		}
		inline void div()
		{
			cout<<"\nDivisine ->"<<a/b;
		}
		inline void multi()
		{
			cout<<"\nMultiplication ->"<<a*b;
		}
};
void main()
{
	clrscr();
	baby b;
	b.sum();
	b.sub();
	b.div();
	b.multi();
	getch();
}