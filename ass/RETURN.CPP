#include<iostream.h>
#include<conio.h>

class student
{
	int roll;
	char name[10];
	int tot;
	float per;
	public:

		void get()
		{
			cout<<"\n enter the roll : ";
			cin>>roll;
			cout<<"\n enter the name : ";
			cin>>name;
			cout<<"\n enter the total : ";
			cin>>tot;

			float per=get(tot);
			get(roll,name,tot,per);

		}
		float  get(int total)
		{
			per=tot/3;
			return per;

		}
		void  get(int roll,char name[10], int tot, float per)
		{
			cout<<"\nroll\tname\ttot\tper";
			cout<<"\n"<<roll<<"\t"<<name<<"\t"<<tot<<"\t"<<per;



		}





};

void main()
{
	student s;
	clrscr();
	s.get();

	getch();

}