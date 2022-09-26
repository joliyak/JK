/*
	1> create a class employee which consist e_id , e_name, b_salary, ta,da, hra, gross_salary,netsalary
	insert any 10 recored  and sort  by this  net_salary

	2> create class a

*/


#include<iostream.h>
#include<conio.h>

class employee
{
	int e_id;
	char e_name[10];
	float b_salary;
	float ta;
	float da;
	float pf;
	float hra;
	float g_salary;
	float net_salary;
	public:

		void get()//get data
		{
			cout<<"\n enter the e id:- ";
			cin>>e_id;
			cout<<"\n enter the e name :- ";
			cin>>e_name;
			cout<<"\n enter the  b salary :- ";
			cin>>b_salary;

		}
		void put()//display data
		{
			cout<<"\n"<<e_id<<"\t"<<e_name<<"\t"<<b_salary<<"\t"<<ta<<"\t"<<da<<"\t"<<hra<<"\t"<<pf<<"\t"<<g_salary<<"\t"<<net_salary;

		}
		void cal()//calculation ta , da , hra, pf, g_salary , net_salary
		{
			ta=(b_salary*10)/100;
			da=(b_salary*12)/100;
			hra=(b_salary*15)/100;
			pf=(b_salary*12.5)/100;

			g_salary=ta+da+hra+b_salary;
			net_salary=g_salary-pf;
		}
		void sort(employee *a) // sort data in decending order
		{
			employee temp;

			int i, j;

			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(a[i].net_salary>a[j].net_salary)
					{
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}

				}

			}


		}

};

void main()// main function
{
	employee a[5],t;

	int i;
	clrscr();
	for(i=0;i<5;i++)
		a[i].get();

	for(i=0;i<5;i++)
		a[i].cal();

	t.sort(a);

	cout<<"\n id\tname\tbsalary\tta\tda\thra\tpf\tgsalary\tnetsalary";
	for(i=0;i<5;i++)
	a[i].put();

	getch();


}