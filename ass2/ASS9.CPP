#include<iostream.h>
#include<conio.h>

class distance
{
	public :
		int a;
		int b;
		void get()
		{
			cout<<"\n enter the data a :- ";
			cin>>a;
			cout<<"\n enter the data b :- ";
			cin>>b;


		}
		void put()
		{
			cout<<"\n a is : "<<a;
			cout<<"\n b is : "<<b;

		}

		distance operator -(distance d2)
		{
			distance temp;
			temp.a=a-d2.a;
			temp.b=b-d2.b;

			return temp;

		}

};
void main()
{
	distance d1,d2,d3;
	clrscr();

	cout<<"\n t1 of data :- ";
	d1.get();
	cout<<"\n t2 of data :- ";
	d2.get();
	cout<<"\n find distance between two  object of data :- ";
	d3=d1-d2;
	d3.put();

	getch();

}