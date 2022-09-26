#include<iostream.h>
#include<conio.h>

class ARAM
{
	int no;
	public:
		void get ()
		{
			cout<<"\n enter the value :- ";
			cin>>no;

		}

		void aramstrong()
		{
			int temp=0;
			int ans=0;
			int tot=0;
			temp=no;

			while(no>=1)
			{
				ans=no%10;
				tot=tot+(ans*ans*ans);
				no=no/10;

			}

			if(temp==tot)
				cout<<"\n this is a aramstorng no";
			else
				cout<<"\n this is not aramstrong no";



		}

};
void main()
{
	clrscr();
	ARAM m;
	m.get();
	m.aramstrong();
	getch();


}