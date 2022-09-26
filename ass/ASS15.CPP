#include<iostream.h>
#include<conio.h>

class student
{
	float a,b;
	public:
		void get();
		void add();
		void sub();
		void mul();
		void div();

};
void student :: get()
{
	cout<<"\n enter a :- ";
	cin>>a;
	cout<<"\n enter b :- ";
	cin>>b;

}
void student :: add()
{
	cout<<"\n addition of two value:-" <<a+b;


}
void student :: sub()
{
	cout<<"\n subtration of two value:- "<<a-b;

}
void student :: mul()
{
	cout<<"\n multiplication of two value:- "<<a*b;

}
void student :: div()
{
	cout<<"\n divition of two value:- "<<a/b;
}

void main()
{
     student s;
     clrscr();

     int ch;
     do{
		cout<<"\n enter 1 to get data :- ";
		cout<<"\nenter 2 to addition:- ";
		cout<<"\n enter 3 to subtration :- ";
		cout<<"\n enter 4 to multiplication :- ";
		cout<<"\n enter 5 to divition :-";
		cout<<"\n enter 8 to exit :- ";

		cout<<"\n enter your choice:- ";
		cin>>ch;

		switch(ch)
		{
			case  1:s.get();
				 break;

			case 2: s.add();
				 break;

			case 3: s.sub();
				 break;

			case 4: s.mul();
				 break;

			case 5: s.div();
				 break;
			case 6: cout<<"\n  BYE....BYE...";
				 break;

			default: cout<<"\n enter the proper choice :- ";
				 break;


		}



     }while(ch!=5);

     getch();

}