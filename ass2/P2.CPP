#include<iostream.h>
#include<conio.h>
#include<string.h>

class adhar
{
	char name[10],city[10];
	char mobile_no[10];
	int adhar_no;
	public:
		void get()// get data
		{
			cout<<"\n enter the  name :- ";
			cin>>name;
			cout<<"\n enter the  city :- ";
			cin>>city;
			cout<<"\n enter the mobile no :- ";
			cin>>mobile_no;
			cout<<"\n enter the adhar no :- ";
			cin>>adhar_no;


		}
		void put()//display data
		{
			cout<<"\n"<<name<<"\t"<<city<<"\t"<<mobile_no<<"\t"<<adhar_no;


		}

		void search(adhar * a)  //search data
		{
			int i;
			int chh,choice;
			int flag=0;
			char n[10];
			cout<<"\n how to seach data :";
			cout<<"\n 1 to adhar to search : \n 2 to name to search: ";
			cin>>chh;

			if(chh==1)
			{
				cout<<"\n how to seach data for ahar no :";
				cin>>choice;

				for(i=0;i<5;i++)
				{
					if(choice==a[i].adhar_no)
					{
						flag=1;
						break;
					}

				}
				if(flag==1)
					cout<<"\n found the data ";
				else
					cout<<"\n not found the data ";
			}
			if(chh==2)
			{
				cout<<"\n how to seach data for name :";
				cin>>n;

				for(i=0;i<5;i++)
				{
					if(strcmp(n,a[i].name)==0)
					{
						flag=1;
						break;
					}

				}
				if(flag==1)
					cout<<"\n found the data ";
				else
					cout<<"\n not found the data ";

			}

		}

};

void main()//main function
{
	adhar a[5],t;
	clrscr();
	int i;
	int ch;
	clrscr();
	cout<<"\n  how many recored are insert :";
	cin>>ch;

	for(i=0;i<ch;i++)
		a[i].get();

	for(i=0;i<ch;i++)
		a[i].put();

	t.search(a);


	getch();




}