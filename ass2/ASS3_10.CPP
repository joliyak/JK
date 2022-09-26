#include<iostream.h>
#include<conio.h>

class first
{
  public:
	char car_name[10],model[10];

};
class second : public first
{
	public:
		int car_no,year;
};
class third : public second
{

	public:
		void get_data();
		void put_data();

};
void third :: get_data()
{
	cout<<"\n enter the car name  : ";cin>>car_name;
	cout<<"\n enter the car model : ";cin>>model;
	cout<<"\n enter the car no : ";cin>>car_no;
	cout<<"\n enter the year : ";cin>>year;
}
void third :: put_data()
{
	cout<<"\n\n\t"<<car_name<<"   "<<model<<"   "<<car_no<<"   "<<year;

}

void main()
{
	clrscr();

	int no,i;
	cout<<"\n enter how many recored are insert : ";cin>>no;
	third t[5];
	for(i=0;i<no;i++)
	t[i].get_data();
	clrscr();
	cout<<"\n\tcar_name   model   carno   year ";
	for(i=0;i<no;i++)
	t[i].put_data();

	getch();


}