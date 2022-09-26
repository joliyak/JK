/*
	create class compny which consist member like emp no , ta10,da12 , hra15, pf12.5
	gross salary and net salary,basic salary ;

	crate class emplyee which consist member like name, age, add, department and city
	post;

	create class salary which contains member function like get_data,
	process, and display;

	write a c++ program to calculate salary of employee

	note: - derivation of salary from compny and employee


*/
#include<iostream.h>
#include<conio.h>

class compny
{
	public:
		int emp_no;
		float ta,da,hra,pf,net_salary,basic_salary,gross_salary;
};

class employee
{
	public:
		int age;
		char emp_name[10],add[10],depart[10],city[10],post[10];

};
class salary:compny,employee
{
	public:

		void get_data()
		{

			cout<<"\n enter the the emp no : ";cin>>emp_no;
			cout<<"\n enter the the basic salary : ";cin>>basic_salary;
			cout<<"\n enter the the emp name : ";cin>>emp_name;
			cout<<"\n enter the the age : ";cin>>age;
			cout<<"\n enter the the department : ";cin>>depart;
			cout<<"\n enter the the city : ";cin>>city;
			cout<<"\n enter the the post : ";cin>>post;
			cout<<"\n enter the address : ";cin>>add;


		}
		void process()
		{
			ta=basic_salary*10.0/100;
			da=basic_salary*12.0/100;
			hra=basic_salary*15.0/100;
			pf=basic_salary*12.5/100;
			gross_salary=ta+da+hra+basic_salary;
			net_salary=gross_salary-pf;

		}

		void put()
		{
			cout<<"\n emp no : "<<emp_no;
			cout<<"\n emp name : "<<emp_name;
			cout<<"\n add : "<<add;
			cout<<"\n age : "<<age;
			cout<<"\n department : "<<depart;
			cout<<"\n city : "<<city;
			cout<<"\n post : "<<post;
			cout<<"\n basic salary : "<<basic_salary;
			cout<<"\n ta : "<<ta;
			cout<<"\n da : "<<da;
			cout<<"\n hra : "<<hra;
			cout<<"\n pf : "<<pf;
			cout<<"\n gross salary : "<<gross_salary;
			cout<<"\n net salary :"<<net_salary;

		}


};
void main()
{
	clrscr();

	salary s;
	s.get_data();
	s.process();
	s.put();

	getch();

}