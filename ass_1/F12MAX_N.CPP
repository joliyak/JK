#include<iostream.h>
#include<conio.h>

class two;
class one
{
	public:
		int x;
		one()
		{
			cout<<"\nEnter First No. ->";
			cin>>x;
		}
		friend void max(one,two);
};
class two
{
	public:
		int y;
		two()
		{
			cout<<"\nEnter Second No. ->";
			cin>>y;
		}
		friend void max(one,two);
};
void max(one o,two t)
{
	if(o.x>t.y)
		cout<<"\nFirst is Max ";
	else if(o.x<t.y)
		cout<<"\nSecond is Max";
	else
		cout<<"\nBoth are Same !!!";
}
void main()
{
	clrscr();
	one o;
	two t;
	max(o,t);
	getch();
}