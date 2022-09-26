#include<iostream.h>
#include<conio.h>
#include<string.h>

int found=0;
class suplyy
{
	public:
		char city[20];
		long int total_sale,sale_person;

};
class ahemdabad : public suplyy
{
	public:
		void get();
		void put();

};
void ahemdabad :: get()
{

		label:
		clrscr();
		cout<<"\n\n\t\t\5   enter the data of ahemdabad  ";
		cout<<"\n\n\n enter the city name  : "; cin>>city;
		cout<<"\n enter the how many sales person : ";cin>>sale_person;
		cout<<"\n enter the total sales : ";cin>>total_sale;


	if(total_sale>20000)
	{
		found=1;
	}
	else
	{
		goto label;
	}

	if(found==1)
	{
		clrscr();
		cout<<"\n\n\t\t\2 new sales member are apointed";
		sale_person+=1;
		getch();
	}
	else
	{
	//
	}
}
void ahemdabad :: put()
{
	clrscr();
	cout<<"\n\n\t\t\3  display  record of ahemdabad  ";
	cout<<"\n\n\t\t\3   city                : "<<city;
	cout<<"\n\t\t\3   sales person        : "<<sale_person;
	cout<<"\n\t\t\3   total sales         : "<<total_sale;

	getch();

}
class jamnagar : public suplyy
{
	public:
		void get();
		void put();

};
void jamnagar :: get()
{
		x:
		clrscr();
		cout<<"\n\n\t\t\5      enter data of jamnagar   ";
		cout<<"\n\n\n enter the city name  : "; cin>>city;
		cout<<"\n enter the how many sales person : ";cin>>sale_person;
		cout<<"\n enter the total sales : ";cin>>total_sale;

	if(total_sale>20000)
	{
		found=2;
	}
	else
	{
		goto x;
	}

	if(found==2)
	{
		clrscr();
		cout<<"\n\n\t\t\2 new sales member are apointed";
		sale_person+=1;
		getch();
	}


}
void jamnagar :: put()
{
	clrscr();
	cout<<"\n\n\t\t\3   display  record of jamnagar   ";
	cout<<"\n\n\t\t\3   city                : "<<city;
	cout<<"\n\t\t\3   sales person        : "<<sale_person;
	cout<<"\n\t\t\3   total sales         : "<<total_sale;


}
void main()
{
	clrscr();
	suplyy s;
	ahemdabad  a;
	jamnagar j;

	a.get();
	a.put();

	j.get();
	j.put();

	getch();

}



