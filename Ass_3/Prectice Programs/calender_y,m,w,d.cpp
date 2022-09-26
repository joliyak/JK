/*
  write a c++ progarm to create class calender which consist member like year , month ,week ,day

*/
#include<iostream.h>
#include<conio.h>

class calender
{
	int y,m,w,d;
	public:

		calender()
		{

		}
		calender(long int value)
		{       
			int rem;

			y=value/365;
			rem=value%365;

			m=rem/30;
			rem=rem%30;

			w=rem/7;
			rem=rem%7;

			d=rem;
		}
		void put()
		{
			cout<<"\n year : "<<y;
			cout<<"\n month : "<<m;
			cout<<"\n week : "<<w;
			cout<<"\n day : "<<d;
		}

};
void main()
{
	long int value;
	clrscr();
	cout<<"enter the value :";
	cin>>value;
	calender w;

	w=value;
	w.put();

	getch();



}