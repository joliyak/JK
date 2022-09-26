#include<iostream.h>
#include<conio.h>

class vehical
{
	public:
		int v_no;
		char color[10];
};
class scotter:public virtual  vehical
{
	public:
		char type[10];
		long int price;
};
class bill:public virtual vehical
{
	public:
		float dis,tax;

};
class payment : public scotter,public bill
{
	public:
		long int ch,total;
		float a_dis;
		void get();
		void process();
		void put();

};
void payment::get()
{
	cout<<"\n ENTER THE VEHICAL NO : ";cin>>v_no;
	cout<<"\n ENTER THE COLOR : ";cin>>color;
	cout<<"\n enter 1 to moped : ";
	cout<<"\n enter 2 to bike : ";
	cout<<"\n enter your choice : ";cin>>ch;
	if(ch==1)
	{
		cout<<"\n ENTER THE TYPE  : ";cin>>type;

	}
	else if(ch==2)
	{
		cout<<"\n ENTER THE TYPE : ";cin>>type;
	}
	cout<<"\n ENTER THE VEHICAL PRICE : ";cin>>price;

}
void payment::process()
{
	dis=price*7/100;
	tax=price*4/100;
	if(ch==1)
	{
		a_dis=price*2/100;
	}
	else if(ch==2)
	{
		a_dis=price*3/100;
	}
	total=price-dis-a_dis+tax;

}
void payment::put()
{
      cout<<"\n\n\t\tVEHICAL NO          : "<<v_no;
      cout<<"\n\t\tCOLOR               : "<<color;
      cout<<"\n\t\tTYPE                : "<<type;
      cout<<"\n\t\tPRICE               : "<<price;
      cout<<"\n\t\tDISCOUNT (%7)       : "<<dis;
      cout<<"\n\t\tTAX (%4)            : "<<tax;
      cout<<"\n\t\tADITIONAL DISCOUNT  : "<<a_dis;
      cout<<"\n\t\t----------------------------------";
      cout<<"\n\t\tFINALL TOTAL IS     : "<<total;


}
void main()
{
	clrscr();

	payment p;
	p.get();
	p.process();
	p.put();

	getch();


}
