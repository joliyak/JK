#include<iostream.h>
#include<conio.h>
#include<string.h>

class edu
{
	public:
		char name[20],address[30],city[20],gender[20];
		long int phone,age;
		edu()
		{
		}
		edu(char *n,char *add,char *c,long int p,char *g,long int a)
		{
			strcpy(name,n);
			strcpy(address,add);
			strcpy(city,c);
			strcpy(gender,g);
			phone=p;
			age=a;
		}
		void put()
		{
			cout<<"\nName ->"<<name;
			cout<<"\nAddress ->"<<address;
			cout<<"\nCity ->"<<city;
			cout<<"\nPhone ->"<<phone;
			cout<<"\nGender ->"<<gender;
			cout<<"\nAge ->"<<age;
		}
};
void main()
{
	clrscr();
	edu e;
	edu e1("JK","Naip","Mahuva",123456,"Male",19);
	e1.put();
	getch();
}