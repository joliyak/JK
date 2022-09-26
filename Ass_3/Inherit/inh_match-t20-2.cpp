/*
	make one class "matches" with data member like player_name ,no of matches_playing.
	inherit that class into test ,onday and t-twenty classes.
	use aproperiate data member into this classes to calculate averege
	run of the player .

*/
#include<iostream.h>
#include<conio.h>
#include<string.h>

class matches
{
	public:
		char p_name[10];
		int no_matches;


};
class oneday:public matches
{
	public:
		int runs;
		float av;

		oneday()
		{
		}
		oneday(char *n)
		{
			strcpy(p_name,n);
		}
		void get()
		{
		  //	cout<<"\n enter the player name : ";cin>>p_name;
			cout<<"\n enter the no of matches : ";cin>>no_matches;
			cout<<"\n enter the runs : ";cin>>runs;
			av=runs/no_matches;

		}
		void put()
		{
			cout<<"\n player name : "<<p_name;
			cout<<"\n no of matches : "<<no_matches;
			cout<<"\n runs : "<<runs;
			cout<<"\n avrage : \n"<<av;
		}
		void avg()
		{
			//av=0;


		}


};

class test:public matches
{
	public:
		int runs;
		float av;

		test()
		{
		}
		test(char *n)
		{
			strcpy(p_name,n);
		}
		void get()
		{
		    //	cout<<"\n\n enter the player name : ";cin>>p_name;
			cout<<"\n enter the no of matches : ";cin>>no_matches;
			cout<<"\n enter the runs : ";cin>>runs;

		}
		void put()
		{
			cout<<"\n player name : "<<p_name;
			cout<<"\n no of matches : "<<no_matches;
			cout<<"\n runs : "<<runs;
			cout<<"\n avrage : "<<av<<"\n";

		}
		void avg()
		{
			av=0;
			av=runs/no_matches;

		}


};

class t20:public matches
{
	public:
		int runs;
		float av;

		t20()
		{
		}
		t20(char *n)
		{
			strcpy(p_name,n);
		}
		void get()
		{
		      //	cout<<"\n\n enter the player name : ";cin>>p_name;
			cout<<"\n enter the no of matches : ";cin>>no_matches;
			cout<<"\n enter the runs : ";cin>>runs;

		}
		void put()
		{
			cout<<"\n player name : "<<p_name;
			cout<<"\n no of matches : "<<no_matches;
			cout<<"\n runs : "<<runs;
			cout<<"\n avrage :"<<av<<"\n";

		}
		void avg()
		{
			av=0;
			av=runs/no_matches;

		}


};

void main()
{
	char name[10];
	clrscr();
	cout<<"name:";
	cin>>name;
	test t(name);
	t.get();
	t.avg();
	t.put();
	oneday o(name);
	o.get();
	o.avg();
	o.put();
	t20 tt(name);
	tt.get();
	tt.avg();
	tt.put();

	getch();

}