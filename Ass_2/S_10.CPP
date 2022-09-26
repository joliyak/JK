#include<iostream.h>
#include<conio.h>

class distance
{
	public :
		int a;
		int b;
		void get()
		{
			cout<<"\n Enter the Value A -> ";
			cin>>a;
			cout<<"\n Enter the Value B -> ";
			cin>>b;
		}
		void put()
		{
			cout<<"\n A is : "<<a;
			cout<<"\n B is : "<<b;
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

	cout<<"\n Data of T1 --> ";
	d1.get();
	cout<<"\n Data of T2 --> ";
	d2.get();
	cout<<"\n Find distance between two  object of data :- ";
	d3=d1-d2;
	d3.put();

	getch();

}