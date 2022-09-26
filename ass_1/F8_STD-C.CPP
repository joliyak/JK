#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
	public:
		int no;
		char name[30],add[50],course[20];
		long int phone;
		student()
		{
		}
		student(int n,char *name1,char *ad,char *c,long int p)
		{
			no=n;
			strcpy(name,name1);
			strcpy(add,ad);
			strcpy(course,c);
			phone=p;
		}
		void put()
		{
			cout<<"\nName ->"<<name;
			cout<<"\nNo ->"<<no;
			cout<<"\nAddress ->"<<add;
			cout<<"\nCourse ->"<<course;
			cout<<"\nPhone No. ->"<<phone;
		}
};
void main()
{
	clrscr();
	student s(1,"JK","Mahuva","BCA",792540);
	s.put();
	getch();
}