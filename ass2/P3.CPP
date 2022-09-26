#include<iostream.h>
#include<conio.h>

class Area
{
	public:


		void sum(int s)//find  the square
		{
			cout<<"\n square : "<<4*s;

		}
		void sum(float pi, float r) // find circle
		{
			cout<<"\n circle : "<<pi*r*r;


		}
		void sum(float a,float b, float c)// find rectangle
		{
			cout<<"\n rectangle : "<<a*b*c;


		}


};

void main()// main function
{
	Area a;
	clrscr();

	a.sum(3);
	a.sum(3.14,2);
	a.sum(3,4,5);

	getch();

}