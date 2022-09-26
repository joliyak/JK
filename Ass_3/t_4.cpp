#include<iostream.h>
#include<conio.h>

class employee
{
	public:
        	int e_id;
                char name[10];

};
class internal:public virtual employee
{
	public:
        	int points_internal;
};
class external:public virtual employee
{
	public:
        	int points_external;

};
class result:public internal,public external
{
	public:
		int total;
	        void get();
	        void put();
};
void result::get()
{
	cout<<"\n enter the EMPLOYEE ID :";cin>>e_id;
        cout<<"\n enter the EMPLOYEE NAME  :";cin>>name;
        cout<<"\n enter the MARK OF INTERNAL :";cin>>points_internal;
        cout<<"\n enter the MARK OF EXTERNAL :";cin>>points_external;
	total=points_internal+points_external;
}
void result::put()
{
	cout<<"\n\n\t\t EMPLOYEE ID :"<<e_id;
        cout<<"\n\t\t EMPLOYEE NAME  :"<<name;
        cout<<"\n\t\t MARK OF INTERNAL :"<<points_internal;
        cout<<"\n\t\t MARK OF EXTERNAL :"<<points_external;
        cout<<"\n\t\t TOTAL : "<<total;

}
void main()
{
	clrscr();

        result r;
        r.get();
        r.put();

        getch();

}