/*
	write a c++ program to convert calender object into no of days where
	calender class consist member like year , month , week and day

*/

#include<iostream.h>
#include<conio.h>
class calender
{
	public:
		int year,month,week, day;

		void get();
		void put();

		operator long int ()
		{
			return(year*365+month*30+week*7+day*1);

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
void main()
{
	clrscr();
	calender c;
	c.get();
	c.put();

	long int d;

	d=c;
	cout<<"\n day is "<<d;

	getch();

}
