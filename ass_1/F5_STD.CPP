#include<iostream.h>
#include<conio.h>
#include<string.h>
#define n 2

class student
{
	public:
		char name[30],clg[30];
		int id;
		float per;
		void get()
		{
			cout<<"\nEnter Name ->";
			cin>>name;
			cout<<"\nEnter Id ->";
			cin>>id;
			cout<<"\nEnter Collage Name ->";
			cin>>clg;
			cout<<"\nEnter Per ->";
			cin>>per;
		}
		void sort(student *s)
		{
			student t;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(strcmp(s[i].clg,s[j].clg)<0)
					{
						t=s[i];
						s[i]=s[j];
						s[j]=t;
					}
				}
			}
		}
		void put()
		{
			cout<<endl<<id<<"\t"<<name<<"\t"<<per<<"\t"<<clg;
		}
};
void main()
{
	clrscr();
	student s[30],temp;
	for(int i=0;i<n;i++)
		s[i].get();
	for(i=0;i<n;i++)
		s[i].put();
	temp.sort(s);
	cout<<"\nSorted\n";
	for(i=0;i<n;i++)
		s[i].put();
	getch();
}