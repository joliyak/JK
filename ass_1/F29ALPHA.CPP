#include<iostream.h>
#include<conio.h>

class dummy
{
	public:
		int alpha,beta,gamma,theta;
		dummy()
		{
			alpha=23;
		}
		dummy(int b)
		{
			beta=b;
		}
		dummy(dummy &d2)
		{
			d2.gamma=23;
			d2.theta=23;
		}
		void put()
		{
			cout<<"Value of alpha ="<<alpha;
			cout<<"Value of beta ="<<beta;
			cout<<"Value of gamma ="<<gamma;
			cout<<"Value of theta ="<<theta;
		}
};
void main()
{
	clrscr();
	dummy d;
	dummy d1(23);
	d1.put();
	getch();
}