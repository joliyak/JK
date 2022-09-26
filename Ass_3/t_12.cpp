#include<iostream.h>
#include<conio.h>

class student
{
	public:
		int roll;
		char name[10];
};
class test:public student
{
	public:
		int sub1,sub2,sub3;

};
class result : public test
{
	public:
		int total;
		float per;
		void get();
		void put();
};
void result::get()
{
	cout<<"\n enter the roll no : ";cin>>roll;
	cout<<"\n enter the name : ";cin>>name;
	cout<<"\n enter the mark of sub1 : ";cin>>sub1;
	cout<<"\n enter the mark of sub2 : ";cin>>sub2;
	cout<<"\n enter the mark of sub3 : ";cin>>sub3;
	total=sub1+sub2+sub3;
	per=total/3.0;
};
void result:: put()
{
	cout<<"\n\n\t\t\5 roll no is : "<<roll;
	cout<<"\n\t\t\5 name is : "<<name;
	cout<<"\n\t\t\5 mark of sub 1 : "<<sub1;
	cout<<"\n\t\t\5 mark of sub 2 : "<<sub2;
	cout<<"\n\t\t\5 mark of sub 3 : "<<sub3;
	cout<<"\n\t\t\3 total : "<<total;
	cout<<"\n\t\t\3 per : "<<per;



}
void main()
{
	clrscr();
	result r;
	r.get();
	r.put();

	getch();


}