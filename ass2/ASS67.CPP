/*
	create  class calender which consist member like year , month ,week,
	day

	create class day which consist member as day

	find out day from calender object

*/
#include<iostream.h>
#include<conio.h>
class Day;
class calender
{
	public:
		int year,month,week, day;

		calender ()
		{
		}
		void get();
		void put();
		operator Day()
		{
			Day t;
			t.d=year*365+month*30+week*7+day*1;
			return t;

		}


};
void calender :: get()
{
	cout<<"\n enter the year : ";
	cin>>year;
	cout<<"\n enter the month : ";
	cin>>month;
	cout<<"\n enter the week : ";
	cin>>week;
	cout<<"\n enter the day : ";
	cin>>day;

}
void calender :: put()
{
	cout<<"\nyear is : "<<year;
	cout<<"\nmonth is : "<<month;
	cout<<"\nweek is : "<<week;
	cout<<"\nday is : "<<day;

}

class Day
{
	public :
		int d;
		Day()
		{
			d=0;

		}

		void put()
		{
			cout<<"\n day is : "<<d;
		}


};

void main()
{
	clrscr();

	calender c;
	c.get();

	Day d;

	d=c;
	d.put();

	getch();

}