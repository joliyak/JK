/*
	write a c++ program to create a time class to consist member like hours, minute and seconds
	insert any numerical value and convert into hours minutes and second
	hint basic to class type conversion

*/

#include<iostream.h>
#include<conio.h>

class TIME
{
	int h,m,s;
	public:

		TIME()
		{

		}
		TIME(long int second)
		{
			int rem;
			h=second/3600;
			rem=second%3600;
			m=rem/60;
			rem=rem%60;
			s=rem;


		}
		void put()
		{
			cout<<"\n hourse : "<<h;
			cout<<"\n minute : "<<m;
			cout<<"\n second : "<<s;

		}

};
void main()
{
	long int second;
	clrscr();
	cout<<"enter the second :";
	cin>>second;
	TIME t;

	t=second;
	t.put();

	getch();



}