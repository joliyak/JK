#include<iostream.h>
#include<conio.h>
#include<string.h>

class  PALINDRAWN
{
	char no[10];
	char n[10];
	public:
		void get()
		{
			cout<<"\n enter data :- ";
			cin>>no;
		}
		void palin()
		{
			strcpy(n,no);
			strrev(n);

			cout<<"no:- "<<no;
			cout<<"n:- "<<n;

			if(strcmp(n,no)==0)
				cout<<"\n palindrawn :- ";
			else
				cout<<"\n not palindrawn :- ";

		}


};
void main()
{
       clrscr();
       PALINDRAWN p;
       p.get();
       p.palin();

       getch();

}