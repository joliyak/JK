#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
class account
{
	public:
		int no;
		char name[33];
		float bal;
		account()
		{
			no=1;
			strcpy(name,"JK");
			bal=1100;
		}
		void deposite()
		{
			float value;
			cout<<"\nEnter Amount to Deposite->";
			cin>>value;
			bal=bal+value;
		}
		void withdraw()
		{
			float value;
			cout<<"\nEnter Amount to Withdraw ->";
			cin>>value;
			if(value>bal)
				cout<<"\nInvaled Amount !!!";
			else
				bal=bal-value;
		}
		void display()
		{
			cout<<"\nACC_No. ->"<<no;
			cout<<"\nName ->"<<name;
			cout<<"\nBalence ->"<<bal;
		}
};
void main()
{
	clrscr();
	account a;
	int choice;
	do
	{
		cout<<"\n1->Deposite\n2->Withdraw\n3->Display\n0->Exit\n-->";
		cin>>choice;
		switch(choice)
		{
			case 1:a.deposite();getch();break;
			case 2:a.withdraw();getch();break;
			case 3:a.display();getch();break;
			case 0:exit(0);break;
			default:cout<<"\nChoose Right Choice !!!";getch();break;
		}clrscr();
	}while(1);
}