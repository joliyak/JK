 //A-3 Q-1
//Hierarchical Inheritance

#include<conio.h>
#include<iostream.h>
#include<string.h>
//char name[20];
float temp;
class match
{
      public:
	     char pname[20],data[20];
	     float nmatch;
	     match()
	     {
		//strcpy(pname,name);
	     }
	     match(char n[])      //Inorder To Copy Name Of Player
	     {
		  //  strcpy(pname,"MSDhoni");
		  //cout<<"Enter name of Player:";
		  //cin>>pname;
		  strcpy(pname,n);

	     }

	     /*void get()
	     {
		  cout<<"Player Name:";
		  cin>>pname;
	     }  */
};

class test:public match
{
     public:
	    int run;

	    test(char n[])      //Inorder To Copy Name Of Player
	     {
		  //  strcpy(pname,"MSDhoni");
		  //cout<<"Enter name of Player:";
		  //cin>>pname;
		  strcpy(pname,n);

	     }

	    void get()
	    {
		   cout<<"\nEnter Number Of Run Score In Test: ";
		   cin>>run;
		   cout<<"Enter Number Of Matches Played In Test: ";
		   cin>>nmatch;
		   temp=run/nmatch;
	    }
	    void put()
	    {
		   cout<<"Average Of "<<pname<<" Is: "<<temp<<endl;
	    }
};
class oneday:public match
{
     public:
	    int run;

	    oneday(char n[])      //Inorder To Copy Name Of Player
	     {
		  //  strcpy(pname,"MSDhoni");
		  //cout<<"Enter name of Player:";
		  //cin>>pname;
		  strcpy(pname,n);

	     }

	    void get()
	    {
		   cout<<"\nEnter Number Of Run Score In Oneday: ";
		   cin>>run;
		   cout<<"Enter Number Of Matches Played In Oneday: ";
		   cin>>nmatch;
		   temp=run/nmatch;
	    }
	    void put()
	    {
		   cout<<"Average Of "<<pname<<" Is: "<<temp<<endl;
	    }

};
class t20:public match
{
     public:
	    int run;

	    t20(char n[])      //Inorder To Copy Name Of Player
	     {
		  //  strcpy(pname,"MSDhoni");
		  //cout<<"Enter name of Player:";
		  //cin>>pname;
		  strcpy(pname,n);

	     }

	    void get()
	    {
		   cout<<"\nEnter Number Of Run Score In T20: ";
		   cin>>run;
		   cout<<"Enter Number Of Matches Played In T20: ";
		   cin>>nmatch;
		   temp=run/nmatch;
	    }
	    void put()
	    {
		   cout<<"Average Of "<<pname<<" Is: "<<temp<<endl;
	    }
};

void main()
{
      clrscr();

      cout<<"Enter name of player:";
      char name[20];
      cin>>name;
      match m(name);


      test t(name);
      t.get();
      t.put();

      oneday o(name);
      o.get();
      o.put();

      t20 a(name);
      a.get();
      a.put();

      getch();
}