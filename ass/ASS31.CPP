#include<iostream.h>
#include<conio.h>
#include<string.h>

class palin
{
	public:
		char no[10];
		palin()
		{
			strcpy(no,"2002");

		}
		void p()
		{
			char n[10];
			strcpy(n,no);
			strrev(n);

			if(strcmp(n,no)==0)
				cout<<"\n palln ";
			else
				cout<<"\n not palin";

		}

};

void main()
{
	clrscr();
	palin p;
	p.p();
	getch();
}
