#include<iostream.h>
#include<conio.h>
#include<string.h>

class employee
{
	public:
		int no;
		char name[30];
		float b_salary,ta,da,hra,pf,net_salary;
		void get()
		{
			cout<<"\nEnter Name ->";
			cin>>name;
			cout<<"\nEnter No. ->";
			cin>>no;
			cout<<"\nEnter Basic Salary ->";
			cin>>b_salary;
		}
		void calculate()
		{
			ta=b_salary*10/100;
			da=b_salary*40/100;
			hra=b_salary*25/100;
			pf=b_salary*15/100;
			net_salary=ta+da+hra+b_salary-pf;
		}
		void put()
		{
			cout<<"\nName ->"<<name;
			cout<<"\nNo. ->"<<no;
			cout<<"\nBasic Salary ->"<<b_salary;
			cout<<"\nTA ->"<<ta;
			cout<<"\nDA ->"<<da;
			cout<<"\nHRA ->"<<hra;
			cout<<"\nPF ->"<<pf;
			cout<<"\nNet Salary ->"<<net_salary;
		}
};
void main()
{
	clrscr();
	employee e;
	e.get();
	e.calculate();
	e.put();
	getch();
}