#include<iostream.h>
#include<conio.h>

class employee
{
	public:
		int id;
		char name[30];
		float b_salary,hra,da,net_salary;
		void get()
		{
			cout<<"\nEnter Id ->";
			cin>>id;
			cout<<"\nEnter name ->";
			cin>>name;
			cout<<"\nEnter Basic Salary ->";
			cin>>b_salary;
		}
		void calculate()
		{
			hra=(b_salary*12)/100;
			da=(b_salary*10)/100;
			net_salary=b_salary-hra-da;
		}
		void put()
		{
			cout<<endl<<id<<"\t"<<name<<"\t"<<b_salary<<"\t"<<hra<<"\t"<<da<<"\t"<<net_salary;
		}
};
void main()
{
	clrscr();
	employee e[20];
	int n;
	cout<<"\nHow many Employee ?\n-->";
	cin>>n;
	for(int i=0;i<n;i++)
		e[i].get();
	for(i=0;i<n;i++)
		e[i].calculate();
	cout<<"\nId\tName\tBSalary\tHRA\tDA\tNet_salary";
	for(i=0;i<n;i++)
		e[i].put();
	getch();
}