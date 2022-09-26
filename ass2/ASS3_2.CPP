#include<iostream.h>
#include<conio.h>

class student
{
	public:
	int roll;
	char name[10];
};
class test: public student
{
	public:
		int sub1,sub2;
};
class result :public test
{
	public:
		int total;
		void get();
		void put();

};
void result::get()
{
	cout<<"\n enter the roll :";cin>>roll;
	cout<<"\n enter the name :";cin>>name;
	cout<<"\n enter the mark of sub1 : ";cin>>sub1;
	cout<<"\n enter the mark of sub2 : ";cin>>sub2;
	total=sub1+sub2;

}
void result::put()
{
	cout<<"\n roll : "<<roll;
	cout<<"\n name : "<<name;
	cout<<"\n sub1 : "<<sub1;
	cout<<"\n sub2 : "<<sub2;
	cout<<"\n totoal : "<<total;

}
void main()
{
	clrscr();
	result r;
	r.get();
	r.put();
	getch();
}