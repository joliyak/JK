#include<iostream.h>
#include<conio.h>
#include<string.h>

class iteam
{
	int i_id;
	char i_name[10];
	float i_stock;
	public:
		iteam()
		{
			i_id=12;
			strcpy(i_name,"keyboard");
			i_stock=1000;

		}

		void purches()
		{
			int val=0;
			cout<<"\n enter the value :- ";
			cin>>val;
			i_stock=i_stock+val;


		}
		void sales()
		{
			int val=0;
			cout<<"\n enter ther value :- ";
			cin>>val;
			i_stock=i_stock-val;
		}
		void dis()
		{
			cout<<"\n i_id:- "<<i_id;
			cout<<"\n i_name:- "<<i_name;
			cout<<"\n i_stock:- "<<i_stock;

		}


};

void main()
{
	iteam i;
	int ch;
	clrscr();

	do{
		cout<<"\n enter 1 to display:- ";
		cout<<"\n enter 2 to pusches:- ";
		cout<<"\n enter 3 to sales :- ";
		cout<<"\n enter 4 to exit:- ";

		cout<<"\n enter your choice:- ";
		cin>>ch;


		switch(ch)
		{
			case 1:  i.dis();
				  break;

			case 2:  i.purches();
				  break;

			case 3:  i.sales();
				  break;

			case 4: cout<<"\n BYE...BYE..";
				 break;

			default: cout<<"\n enter the proper choice :- ";
				 break;


		}

	}while(ch!=4);

	getch();
}