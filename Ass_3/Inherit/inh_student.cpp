/*
	create class student which consist info like roll, name,markof thiroy subject;

	create class prectical which consist a mark of practical subject

	create class  result which inherit from student  and practical class
	which consist member like total mark and per

	write a c++ program to find out result of a student

*/

#include<iostream.h>
#include<conio.h>

class student
{
	public:

		int roll;
		char name[10];
		int c,os,sad,dfs;
};

class practical
{
	public:
		int p_c,p_dfs;

};
class result:student , practical
{
	public:
		float total;
		float per;
		void get()
		{
			cout<<"\n enter the roll no : ";cin>>roll;
			cout<<"\n enter the name of student : ";cin>>name;
			cout<<"\n enter the mark of cplush plush : ";cin>>c;
			cout<<"\n enter the mark of os : ";cin>>os;
			cout<<"\n enter the mark of sad : ";cin>>sad;
			cout<<"\n enter the mark of dfs : ";cin>>dfs;
			cout<<"\n enter the mark of p_cplush plush : ";cin>>p_c;
			cout<<"\n enter the mark of p_dfs : ";cin>>p_dfs;
			total=c+os+sad+dfs+p_dfs+p_c;
			per=total/6.0;

		}

		void put()
		{
			cout<<"\n roll no : "<<roll;
			cout<<"\n name : "<<name;
			cout<<"\n c : "<<c;
			cout<<"\n os : "<<os;
			cout<<"\n sad : "<<sad;
			cout<<"\n dfs : "<<dfs;
			cout<<"\n p_c : "<<p_c;
			cout<<"\n p_dfs : "<<p_dfs;
			cout<<"\n total : "<<total;
			cout<<"\n per : "<<per;

		}


};

void main()
{
	clrscr();
	result r;
	r.get();
	r.put();

	getch();

}
