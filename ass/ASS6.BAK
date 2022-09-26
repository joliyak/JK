#include<iostream.h>
#include<conio.h>
#include<string.h>

class account
{
	int acc_no;
	char acc_name[10];
	int bal;
	public:
		account()
		{
			acc_no=1;
			strcpy(acc_name,"kavit");
			bal=1000;


		}
		void deposite()
		{
			int value=0;
			cout<<"\n enter the value:- ";
			cin>>value;
			bal=bal+value;


		}


		void withdraw()
		{
			int value=0;
			cout<<"\n enter the value:- ";
			cin>>value;
			if(value>bal)
				cout<<"\n not enough";
			else
				bal=bal-value;

		}

		void display()
		{
			cout<<"\n acc_no:-"<<acc_no;
			cout<<"\n acc_name:- "<<acc_name;
			cout<<"\n balance:- "<<bal<<endl;

		}


};

void main()
{
	account a;
	clrscr();
	int ch;
	do{
	      cout<<"\n enter 1 to deposite:- ";
	      cout<<"\n  enter 2 to withdraw :- ";
	      cout<<"\n enter 3 to display:- ";
	      cout<<"\n enter 4 to exit:- ";

	      cout<<"\n enter your choice:- ";
	      cin>>ch;

	      switch(ch)
	      {

			case 1:  a.deposite();
				 break;

			case 2:  a.withdraw();
				  break;

			case 3:  a.display();
				  break;

			case 4:  cout<<"\nBYE.. BYE..";
				  break;

			default: cout<<"\n enter proper choice:- ";
				  break;

	      }





	}while(ch!=4);
	getch();


}