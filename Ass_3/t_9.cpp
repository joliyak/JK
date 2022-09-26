#include<iostream.h>
#include<conio.h>

class shape
{
	public:
		virtual void get()
		{}
		virtual void put()
		{
		}

};
class circal : public shape
{
	public:
	       float value,tot;
	       void get()
	       {
		       cout<<"\n enter the rang  of circal : ";cin>>value;

	       }
	       void put()
	       {
			tot=3.14*value*value;
			cout<<"\n shape of circal is : "<<tot;
	       }

};
class square : public shape
{
	public:
		int val;
		void get()
		{
			cout<<"\n\n enter the value of square  : "; cin>>val;
		}

		void put()
		{
			cout<<"\n spuare  is : "<<4*val;
		}
};
class ractangle : public shape
{
	public:
		int l,b;
		void get()
		{
			cout<<"\n\n enter l : ";cin>>l;
			cout<<"\n enter b : ";cin>>b;
		}
		void put()
		{
			cout<<"\n rectangle is : "<<(l*b);
		}



};
void main()
{
        clrscr();
        circal c;
        c.get();
        c.put();
        square s;
        s.get();
        s.put();
        ractangle r;
        r.get();
        r.put();

        getch();

}