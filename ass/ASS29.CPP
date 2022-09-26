#include<iostream.h>
#include<conio.h>

class overloading
{
	public:
		int x;
		overloading()
		{
			x=23;

		}
		overloading(int a)
		{
			x=a;

		}
		overloading(overloading & a)
		{
			x=a.x;

		}
		void dis()
		{
			cout<<"x:- "<<x;

		}





};
void main()
{
	clrscr();
	overloading alpha;
	overloading beta(alpha.x);
	overloading gamma=beta;
	overloading theta=gamma;

	alpha.dis();
	beta.dis();
	gamma.dis();
	theta.dis();

	getch();


}