#include<iostream.h>
#include<conio.h>

class SIMPLE
{
	int p;
	int r;
	int n;
	public:
		void si(int r,int p=1000,int n=1)
		{
			cout<<"\n simple intrest;- "<<(p*r*n)/100;
		}



};

void main()
{
	clrscr();
	SIMPLE s;
	s.si(5);


	getch();

}