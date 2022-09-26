#include<iostream.h>
#include<conio.h>
#include<string.h>

class palin
{
	public:
		int  no;
		palin()
		{
			no=153;

		}
		void p()
		{
			int ans=0;
			int tot=0;
			int temp=no;
			while(no>=1)
			{
				ans=no%10;
				tot+=ans*ans*ans;
				no=no/10;

			}



			if(tot==temp)
				cout<<"\n arm";
			else
				cout<<"\n not arm";

		}

};

void main()
{
	clrscr();
	palin p;
	p.p();
	getch();
}
