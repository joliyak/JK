#include<iostream.h>
#include<conio.h>
#include<string.h>

class faculties
{

	char f_name[10];
	char add[10];
	char city[10];
	char phone[10];
	char gender[5];
	int age;
	public:
		faculties()
		{
		}
		faculties(char n[10],char ad[10],char c[10],char mobile[10],char gen[10],int ag)
		{
			strcpy(f_name,n);
			strcpy(add,ad);
			strcpy(city,c);
			strcpy(phone,mobile);
			strcpy(gender,gen);
			age=ag;

		}

		void display()
		{
			cout<<"\n f_name:- "<<f_name;
			cout<<"\n add:- "<<add;
			cout<<"\n city:- "<<city;
			cout<<"\n phone:- "<<phone;
			cout<<"\n gender:- "<<gender;
			cout<<"\n age:- "<<age;


		}


};

void main()
{
	clrscr();
	faculties f;
	faculties f1("bca","street","surat","8934","male",90);

	f1.display();
	getch();

}
