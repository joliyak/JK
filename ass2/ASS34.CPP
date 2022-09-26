/*
	write a c++ program using to create class TIME which consist member like hour, minute and second
	input above member and convert it into the second (hint = t) class to bacis conversion

*/

#include<iostream.h>
#include<conio.h>

class TIME
{
	public :
		 int hours,minute,second;

		 void get();
		 void put();

		 operator long int ()
		 {
			return(hours*3600+minute*60+second*1);
		 }


};
void TIME :: get()
{
	cout<<"\n enter the hours : ";
	cin>>hours;
	cout<<"\n enter the minute : ";
	cin>>minute;
	cout<<"\n enter the second : ";
	cin>>second;

}
void TIME :: put()
{
	cout<<"\n hours is : "<<hours;
	cout<<"\n minute is : "<<minute;
	cout<<"\n second is : "<<second;

}

void main()
{
	clrscr();
	TIME t1;
	t1.get();
	t1.put();

	long int seconds;
	seconds = t1;
	cout<<"\n second is  : "<<seconds;

	getch();

}