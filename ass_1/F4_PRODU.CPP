#include<iostream.h>
#include<conio.h>
#define n 2

class shop
{
	public:
		int code;
		char name[20];
		int d,m,y;
		float price;
		inline void get()
		{
			cout<<"Enter Product Code ->";
			cin>>code;
			cout<<"\nEnter Name ->";
			cin>>name;
			cout<<"\nEnter Price ->";
			cin>>price;
			cout<<"\nEnter Date/Month/Year of Soled \n->";
			cin>>d>>m>>y;
		}
		inline void put()
		{
			cout<<endl<<code<<"\t"<<name<<"\t"<<price<<"\t"<<d<<"/"<<m<<"/"<<y;
		}
};

void main()
{
	clrscr();
	shop s[20];
	for(int i=0;i<n;i++)
		s[i].get();
	cout<<"\nCode\tName\tPrice\tDate/Month/Year";
	for(i=0;i<n;i++)
		s[i].put();
	getch();
}