#include<iostream.h>
#include<conio.h>
#include<string.h>

class univercity
{
	public:
		int u_id,s_id,seatno,os,sad,c,dfs;
		char course[5],u_name[20];
		univercity()
		{
			strcpy(course,"BCA");
			strcpy(u_name,"MKBU");
		}

};

class kbpccs : univercity
{
	public:
		char s_name[20],c_name[20];
		int total;
		float per;
		void get();
		void put();


};
void kbpccs ::get()
{
	cout<<"\n enter the u id : ";cin>>u_id;
	cout<<"\n enter the s_id : ";cin>>s_id;
	cout<<"\n enter the seat no : ";cin>>seatno;
	cout<<"\n enter the student name : ";cin>>s_name;
	cout<<"\n  enter the collage name : ";cin>>c_name;
	cout<<"\n enter the mark of os : ";cin>>os;
	cout<<"\n enter the mark of sad : ";cin>>sad;
	cout<<"\n enter the mark of dfs : ";cin>>dfs;
	cout<<"\n enter the mark of c++ : ";cin>>c;
	total=c+os+dfs+sad;
	per=total/4.0;
}
/*void kbpccs :: put()
{
	cout<<"\n u id is : "<<u_id;
	cout<<"\n s id is : "<<s_id;
	cout<<"\n seat no is  : "<<seatno;
	cout<<"\n student name is : "<<s_name;
	cout<<"\n collage name is : "<<c_name;
	cout<<"\n uinvercity name is : "<<u_name;
	cout<<"\n course name is : "<<course;
	cout<<"\n mark of c++ : "<<c;
	cout<<"\n mark of os : "<<os;
	cout<<"\n mark of sad : "<<sad;
	cout<<"\n mark of dfs : "<<dfs;
	cout<<"\n total is : "<<total;
	cout<<"\n percentage is : "<<per;

} */
class gurukul : univercity
{
	public:
		char s_name[20],c_name[20];
		int total;
		float per;
		void get();
		void put();



};
void gurukul ::get()
{
	cout<<"\n enter the u id : ";cin>>u_id;
	cout<<"\n enter the s_id : ";cin>>s_id;
	cout<<"\n enter the seat no : ";cin>>seatno;
	cout<<"\n enter the student name : ";cin>>s_name;
	cout<<"\n  enter the collage name : ";cin>>c_name;
	cout<<"\n enter the mark of os : ";cin>>os;
	cout<<"\n enter the mark of sad : ";cin>>sad;
	cout<<"\n enter the mark of dfs : ";cin>>dfs;
	cout<<"\n enter the mark of c++ : ";cin>>c;
	total=c+os+dfs+sad;
	per=total/4.0;
}
/*void gurukul :: put()
{
	cout<<"\n u id is : "<<u_id;
	cout<<"\n s id is : "<<s_id;
	cout<<"\n seat no is  : "<<seatno;
	cout<<"\n student name is : "<<s_name;
	cout<<"\n collage name is : "<<c_name;
	cout<<"\n uinvercity name is : "<<u_name;
	cout<<"\n course name is : "<<course;
	cout<<"\n mark of c++ : "<<c;
	cout<<"\n mark of os : "<<os;
	cout<<"\n mark of sad : "<<sad;
	cout<<"\n mark of dfs : "<<dfs;
	cout<<"\n total is : "<<total;
	cout<<"\n percentage is : "<<per;

} */

class result:kbpccs,gurukul
{
	public:
		void put();


};
void result :: put()
{
	cout<<"\n u id is : "<<u_id;
	cout<<"\n s id is : "<<s_id;
	cout<<"\n seat no is  : "<<seatno;
	cout<<"\n student name is : "<<s_name;
	cout<<"\n collage name is : "<<c_name;
	cout<<"\n uinvercity name is : "<<u_name;
	cout<<"\n course name is : "<<course;
	cout<<"\n mark of c++ : "<<c;
	cout<<"\n mark of os : "<<os;
	cout<<"\n mark of sad : "<<sad;
	cout<<"\n mark of dfs : "<<dfs;
	cout<<"\n total is : "<<total;
	cout<<"\n percentage is : "<<per;

}
void main()
{
	clrscr();
	result r;
	kbpccs::get();
	gurukul::get();
	r.put();



	getch();

}