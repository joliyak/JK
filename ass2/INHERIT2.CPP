/*
	create class collage which consist member as c_name,add,city,
	create class student which inherited from collage which consist
	members like roll, name, mark of four subject , total

	write a c++ program to input any 5 record and display proper
	format where tot is calculate automatically

*/

#include<iostream.h>
#include<conio.h>

class collage
{
	public:
		char c_name[10],add[10],city[10];

};
class student :public collage
{
	public:
		int roll,s1,s2,s3,s4,total;
		char name[10];

		void get()
		{

		  cout<<"\n enter the collage name :";cin>>c_name;
		  cout<<"\n enter the address :";cin>>add;
		  cout<<"\n enter the city :";cin>>city;
		  cout<<"\n enter the roll no :";cin>>roll;
		  cout<<"\n enter the mark of s1 :";cin>>s1;
		  cout<<"\n enter the mark of s2 :";cin>>s2;
		  cout<<"\n enter the mark of s3 :";cin>>s3;
		  cout<<"\n enter the mark of s4 :";cin>>s4;
		  total=s1+s2+s3+s4;
		}

		void put()
		{

			cout<<"\n "<<c_name<<"\t"<<add<<"\t "<<city<<"\t"<<roll<<"\t "<<s1<<"\t "<<s2<<"\t "<<s3<"\t "<<s4<<"\t "<<total;

		}


};

void main()
{
	clrscr();

	student s[5];
	int i,no;
	cout<<"\n enter how many recored are insert:";cin>>no;
	for(i=0;i<no;i++)
	{
		s[i].get();


	}

	cout<<"\n c_name\tadd\tcity\troll\tname\ts1\ts2\ts3\t\s4\ttotal";
	for(i=0;i<no;i++)
	{
		s[i].put();


	}

	getch();


}