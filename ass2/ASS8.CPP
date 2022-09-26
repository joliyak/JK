#include<iostream.h>
#include<conio.h>

class TIME
{
	public :
		int h;
		int m;
		int s;
		void get()
		{
			cout<<"\n enter the hourse :- ";
			cin>>h;
			cout<<"\n enter the minute :- ";
			cin>>m;
			cout<<"\n enter the second :- ";
			cin>>s;


		}
		void put()
		{
			cout<<"\n house is : "<<h;
			cout<<"\n minute is : "<<m;
			cout<<"\n second is : "<<s;

		}

		TIME operator +(TIME t2)
		{
			TIME temp;
			temp.h=h+t2.h;
			temp.m=m+t2.m;
			temp.s=s+t2.s;

			return temp;

		}

};
void main()
{
	TIME t1,t2,t3;
	clrscr();

	cout<<"\n t1 of data :- ";
	t1.get();
	cout<<"\n t2 of data :- ";
	t2.get();
	cout<<"\n addition of two  object of data :- ";
	t3=t1+t2;
	t3.put();

	getch();

}