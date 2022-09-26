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
		int no_matches;
		char p_name[10];

};
class test:public  matches
{
	public:
		int runs;
		float avrage;
		test(char *name)
		{
			strcpy(p_name,name);

		}
		void get();
		void put();
};
void test::get()
{
	cout<<"\n\n enter the runs of test matches: ";cin>>runs;
	cout<<"\n enter the no of matches of test matces: ";cin>>no_matches;
	avrage=runs/no_matches;
}
void test::put()
{
	cout<<"\n\n\t\t test matche result : "<<p_name<<"  "<<no_matches<<"  "<<runs<<"  "<<avrage;
}
class oneday:public  matches
{
	public:
		int runs;
		float avrage;
		oneday(char *name)
		{
			strcpy(p_name,name);

		}
		void get();
		void put();
};
void oneday ::get()
{
	cout<<"\n\n enter the runs of oneday match : ";cin>>runs;
	cout<<"\n enter the no of matches of oneday match : ";cin>>no_matches;
	avrage=runs/no_matches;
}
void oneday ::put()
{
	cout<<"\n\n\t\t oneday matche result : "<<p_name<<"  "<<no_matches<<"  "<<runs<<"  "<<avrage;
}
class t20:public  matches
{
	public:
		int runs;
		float avrage;
		t20(char *name)
		{
			strcpy(p_name,name);

		}
		void get();
		void put();
};
void t20::get()
{
	cout<<"\n\n enter the runs match of t20 : ";cin>>runs;
	cout<<"\n  enter the no of matches of t20 : ";cin>>no_matches;
	avrage=runs/no_matches;
}
void t20::put()
{
	cout<<"\n\n\t\t t20 matche result : "<<p_name<<"  "<<no_matches<<"  "<<runs<<"  "<<avrage;
}
void main()
{
	char *name;
	clrscr();

	cout<<"\n enter the name : ";cin>>name;
	test t(name);
	t.get();
	t.put();
	oneday o(name);
	o.get();
	o.put();
	t20 tt(name);
	tt.get();
	tt.put();

	getch();
}