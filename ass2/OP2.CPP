/*
	write a c++ program to create class weight which consist member like
	 gram and kilogram

*/

#include<iostream.h>
#include<conio.h>

class Weight
{
	int g,k;
	public:

		Weight()
		{

		}
		Weight(long int value)
		{       int rem;

			k=value/1000;
			rem=value%1000;
			g=rem;


		}
		void put()
		{
			cout<<"\n gram : "<<g;
			cout<<"\n kilogram : "<<k;

		}

};
void main()
{
	long int value;
	clrscr();
	cout<<"enter the value :";
	cin>>value;
	Weight w;

	w=value;
	w.put();

	getch();



}