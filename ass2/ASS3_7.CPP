#include<iostream.h>
#include<conio.h>
#include<string.h>

class media
{
	public:
		char title[10];
		int price;

		media(char *tt,int pp)
		{
			strcpy(title,tt);
			price=pp;
		}

};
class harddisk : public media
{
	public:
		int qty;
		char hdd_type[10];
		harddisk(char *t,int p,int q,char*h) : media(t,p)
		{
			qty=q;
			strcpy(hdd_type,h);


		}
		void dis();

};
void harddisk::dis()
{
	cout<<"\n\n\t\t TITLE : "<<title;
	cout<<"\n\t\t PRICE : "<<price;
	cout<<"\n\t\t QTY : "<<qty;
	cout<<"\n\t\t HARDDISK TYPE : "<<hdd_type;
}
class pendrive : public media
{
	public:
	int qty;
	char pendrive_type[10];

		pendrive(char *t1,int p1,int q,char *pe) : media(t1,p1)
		{
			qty=q;
			strcpy(pendrive_type,pe);
		}
		void dis();
};
void pendrive::dis()
{
	cout<<"\n\n\t\t TITLE : "<<title;
	cout<<"\n\t\t PRICE : "<<price;
	cout<<"\n\t\t QTY : "<<qty;
	cout<<"\n\t\t PENDRIVE TYPE : "<<pendrive_type;
}
void main()
{
	clrscr();

	cout<<"\n\t\t 1  HARDDISK DISPLAY ";
	harddisk h("enternal",100,5,"small");
	h.dis();
	cout<<"\n\n\n\n\n\n\n\t\t 2 PENDRIVE DISPLAY ";
	pendrive p("external",200,5,"big");
	p.dis();

	getch();

}
