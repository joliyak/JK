/*
	create class univercity which consist member like id, seatno, u_name

	create a class collage which consist member like c_name,stream,
	address,student name,city,

	class collage is inherited from class univercity


*/
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class univercity
{
	public:
		int id,seatno;
		char u_name[10];

		void get();

};

class collage:public univercity
{
	public:
		char c_name[10],stream[10],add[10],s_name[10],city[10];
		void get()
		{
			cout<<"\n enter the id :";cin>>id;
			cout<<"\n enter the seatno: ";cin>>seatno;
		      //	fflush(stdin);
			cout<<"\n enter the user name : ";cin>>u_name;
		       //	fflush(stdin);
			cout<<"\n enter the c_name: ";cin>>c_name;
		       //	fflush(stdin);
			cout<<"\n enter the stream:  ";cin>>stream;
		      //	fflush(stdin);
			cout<<"\n enter the address: ";cin>>add;
		       //	fflush(stdin);
			cout<<"\n enter the student name : ";cin>>s_name;
		      //	fflush(stdin);
			cout<<"\n enter the city : ";cin>>city;

		}
		void put()
		{
			cout<<"\n id is :"<<id;
			cout<<"\n seat no :"<<seatno;
			cout<<"\n user name :"<<u_name;
			cout<<"\n c_name: "<<c_name;
			cout<<"\n stream: "<<stream;
			cout<<"\n address :"<<add;
			cout<<"\n student name :"<s_name;
			cout<<"\bn city :"<<city;


		}

};
void main()
{
	clrscr();

	collage c;
	c.get();
	c.put();

	getch();

}