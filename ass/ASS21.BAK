#include<iostream.h>
#include<conio.h>
#include<string.h>

class book
{
	int b_code;
	char b_edition[10];
	char b_aothor[10];
	char b_title[10];
	char b_publisher[10];
	public:
		void get()
		{
			cout<<"\n enter the book code:- ";
			cin>>b_code;
			cout<<"\n enter book eddition :- ";
			cin>>b_edition;
			cout<<"\n enter book aother:- ";
			cin>>b_aothor;
			cout<<"\n enter book title:- ";
			cin>>b_title;
			cout<<"\n enter the book publisher:- ";
			cin>>b_publisher;


		}
		void display()
		{
			cout<<"\n"<<b_code<<"\t"<<b_edition<<"\t"<<b_aothor<<"\t"<<b_title<<"\t"<<b_publisher<<endl;


		}

		void search(book *a)
		{
			char t[10];
			int flag=0;
			int i;

			cout<<"\n enter search title of book:- ";
			cin>>t;

			for(i=0;i<10;i++)
			{
				if(strcmp(t,a[i].b_title)==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
				cout<<"\n found the book:- ";
			else
				cout<<"\n not found the book:- ";

		}



};
void main()
{
	clrscr();
	int i;
	int n;
	book b[5],temp;
	cout<<"\n how many recored are entered :-";
	cin>>n;

		for(i=0;i<n;i++)
		b[i].get();

		for(i=0;i<n;i++)
		b[i].display();

		temp.search(b);

	getch();

}