#include<iostream.h>
#include<conio.h>

class Day;
class calender
{
	public:
		int y,m,w,d;
		void put();


};
void calender ::put()
{
	cout<<"\n year is :"<<y;
	cout<<"\n month is :"<<m;
	cout<<"\n week is :"<<w;
	cout<<"\n day is : "<<d;

}

class Day
{
	public:
		int day;
		void get()
		{
			cout<<"\n enter the day : ";
			cin>>day;
		}

		Day()
		{
		}
		Day (calender c)
		{
			int rem;
			c.y=day/365;
			rem=day%365;
			c.m=rem/30;
			rem=rem%30;
			c.w=rem/7;
			rem=rem%7;
			c.d=rem;

		}


/*		operator calender()
		{
			calender c;
			int rem;
			c.y=day/365;
			rem=day%365;
			c.m=rem/30;
			rem=rem%30;
			c.w=rem/7;
			rem=rem%7;
			c.d=rem;

			return c;


		}*/

};
void main()
{
	clrscr();
	calender c;
	Day d;
	d.get();
	c=d;
	c.put();
	getch();


}