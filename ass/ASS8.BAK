#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
	int roll;
	char name[10];
	char course[10];
	char add[10];
	char phone[10];
	public:
		student()
		{
			roll=1;
			strcpy(name,"kavit");
			strcpy(course,"bca");
			strcpy(add,"vasitalv");
			strcpy(phone,"23445");




		}
		student (int n,char na[10],char co[10],char ad[10], char pho[10])
		{
			roll=n;
			strcpy(name,na);
			strcpy(course,co);
			strcpy(add,ad);
			strcpy(phone,pho);



		}
		student (student &a)
		{
			roll=a.roll;
			strcpy(name,a.name);
			strcpy(course,a.course);
			strcpy(add,a.add);
			strcpy(phone,a.phone);
		}
		void display()
		{
			cout<<"\n roll :- "<<roll;
			cout<<"\n name:- "<<name;
			cout<<"\n course :- "<<course;
			cout<<"\n add:- "<<add;
			cout<<"\n phone:-  "<<phone;

		}


};
void main()
{
	student s;
	clrscr();

	student s1(2,"dixit","vasit","bca","909");
	student s2=s1;

	s.display();
	s1.display();
	s2.display();
	getch();


}