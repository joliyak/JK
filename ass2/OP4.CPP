#include<iostream.h>
#include<conio.h>

class money
{
	int a,b,c,d,e,f,g,h;
	public:

		money()
		{

		}
		money(long int value)
		{       int rem;

			a=value/2000;
			rem=value%2000;

			b=rem/500;
			rem=rem%500;

			c=rem/200;
			rem=rem%200;

			d=rem/100;
			rem=rem%100;

			e=rem/50;
			rem=rem%50;

			f=rem/20;
			rem=rem%20;

			g=rem/10;
			rem=rem%10;

			h=rem/5;
			rem=rem%5;

			i=rem;



		}
		void put()
		{
			cout<<"\n 2000 : "<<a;
			cout<<"\n 500 : "<<b;
			cout<<"\n 200 : "<<c;
			cout<<"\n 100 : "<<d;
			cout<<"\n 50 : "<<e;
			cout<<"\n 20 : "<<f;
			cout<<"\n 10 : "<<g;
			cout<<"\n 5 :"<<h;
			cout<<"\n 1 : "<<i;


		}

};
void main()
{
	long int value;
	clrscr();
	cout<<"enter the value :";
	cin>>value;
	money w;

	w=value;
	w.put();

	getch();



}