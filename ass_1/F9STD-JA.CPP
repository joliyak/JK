#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
	public:
		int rno;
		char name[20];
		char result[10];
		long int mobile;
		int oracle,java,networking,total;
		float per;
		void input()
		{
			cout<<"\nEnter Roll No. ->";
			cin>>rno;
			cout<<"\nEnter Name ->";
			cin>>name;
			cout<<"\nEnter Mobile No ->";
			cin>>mobile;

			do
			{
				cout<<"\nEnter Mark of Oracle ->";
				cin>>oracle;
			}while(oracle<=0 || oracle>100);

			do
			{
				cout<<"\nEnter Mark of Java->";
				cin>>java;
			}while(java<=0 || java>100);

			do
			{
				cout<<"\nEnter Mark of Networking->";
				cin>>networking;

			}while(networking<=0 || networking>100);
		}
		void process()
		{
			int flag=0;
			total=oracle+java+networking;
			if(oracle<28 ||java<28||networking<28)
			{
				per=00;
				strcpy(result,"Fail");
			}
			else
			{
				per=total/3.0;
				strcpy(result,"Pass");
			}
		}
		void output()
		{
			cout<<"\nName ->"<<name;
			cout<<"\nRoll No. ->"<<rno;
			cout<<"\nMobile No. ->"<<mobile;
			cout<<"\nMarks of Oracle ->"<<oracle;
			cout<<"\nMarks of Java ->"<<java;
			cout<<"\nMarks of Networking ->"<<networking;
			cout<<"\nTotal ->"<<total;
			cout<<"\nPer ->"<<per;
			cout<<"\nResult ->"<<result;
		}
};
void main()
{
	clrscr();
	student s;
	s.input();
	s.process();
	s.output();
	getch();
}