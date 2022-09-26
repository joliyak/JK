#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
//#define n 1

class book
{
	public:
		int code;
		char title[30],author[30],edi[20],pub[30];
		void get()
		{
			cout<<"\nEnter Book Code ->";
			cin>>code;
			cout<<"\nEnter Title ->";
			cin>>title;
			cout<<"\nEnter Author ->";
			cin>>author;
			cout<<"\nEnter Edition ->";
			cin>>edi;
			cout<<"\nEnter Publisher ->";
			cin>>pub;
		}
		void sort(book *b)
		{
			book t;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(strcmp(b[i].title,b[j].title)>0)
					{
						t=b[i];
						b[i]=b[j];
						b[j]=t;
					}
				}
			}
		}
		void search(book *b)
		{
			char se[30];
			int flag=0;
			cout<<"\nEnter Title ->";
			cin>>se;
			for(int i=0;i<n;i++)
			{
				if(strcmp(se,b[i].title)==0)
				{
					flag=1;
					cout<<"\nFound";
					cout<<endl<<b[i].code<<"\t"<<b[i].title<<"\t"<<b[i].author<<"\t"<<b[i].edi<<"\t"<<b[i].pub;
					return;
				}
				else
					cout<<"\nNot Found !!!";
			}
		}
		void put()
		{
			cout<<endl<<code<<"\t"<<title<<"\t"<<author<<"\t"<<edi<<"\t"<<pub;
		}
};
int n,i;
book b[20],temp;
void insert()
{
	//book b[20];
	for(i=0;i<n;i++)
	{
		b[i].get();
	}
}
void display()
{
	//book b[20];
	cout<<"\nCode\tTitle\tAuthor\tEdition\tPublisher";
	for(i=0;i<n;i++)
	{
		b[i].put();
	}
}
void main()
{
	clrscr();
	//book b[20],temp;
	int choice;
	cout<<"\nHow Many Books ?\n-->";
	cin>>n;
	clrscr();
	do
	{
		cout<<"\n1->Insert\n2->Display\n3->Search\n0->Exit\n-->";
		cin>>choice;
		switch(choice)
		{
			/*for(i=0;i<n;i++)
			{
				case 1:b[i].get();getch();break;
			}
			for(i=0;i<n;i++)
			{
				case 2:b[i].put();getch();break;
			} */
				case 1:insert();getch();break;
				case 2:display();getch();break;
				case 3:temp.search(b);getch();break;
				case 0:exit(0);break;
				default:cout<<"\nSelect Right Choice !!!";getch();break;
		}clrscr();
	}while(1);

/*void main()
{
	clrscr();
	book b[20],temp;
	for(int i=0;i<n;i++)
		b[i].get();
	cout<<"\nCode\tTitle\tAuthor\tEdition\tPublisher";
	for(i=0;i<n;i++)
		b[i].put();
	temp.sort(b);
	cout<<"\nSorted\nCode\tTitle\tAuthor\tEdition\tPublisher";
	for(i=0;i<n;i++)
		b[i].put();
	temp.search(b);
	getch();
}
*/
}
