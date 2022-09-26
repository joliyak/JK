#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
	int id;
	char name[10];
	float per;
	char collage_name[20];
	public:

		void get()
		{
			cout<<"\n enter the id :- ";
			cin>>id;
			cout<<"\n enter the name:- ";
			cin>>name;
			cout<<"\n enter the per:- ";
			cin>>per;
			cout<<"\n enter collage_name:- ";
			cin>>collage_name;

		}
		void display()
		{
			cout<<"\n"<<id<<"\t"<<name<<"\t "<<per<<"\t"<<collage_name;


		}
		void sort(student *a)
		{

			int i,j;
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(strcmp(a[i].collage_name,a[j].collage_name)<0)
					{
						student t;
						t=a[i];
						a[i]=a[j];
						a[j]=t;

					}
				}
			}

		}



};

void main()
{
	clrscr();
	int i,ch;
	student s[5],t;

	do{
		cout<<"\n enter 1 to get data : ";
		cout<<"\n enter 2 to display : ";
		cout<<"\n enter 3 to sort data : ";
		cout<<"\n enter 4 to exit : ";

		cout<<"\n enter your choice : ";
		cin>>ch;

		switch(ch)
		{
			case 1 : for(i=0;i<5;i++)
				 {	s[i].get();
				 }
				 break;

			case 2 : for(i=0;i<5;i++)
				 {	s[i].display();
				 }
				 break;

			case 3 : t.sort(s);
				 break;

			case 4 : cout<<"\ BYE..BYE..";
				  break;

			default : cout<<"\n enter the proper choice : ";
				   break;
		}
	}while(ch!=4);


	getch();


}