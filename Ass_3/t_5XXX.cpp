#include<iostream.h>
#include<conio.h>

class game
{
	public :
		 int point ;
               	virtual void get()=0;
		virtual void display()=0;

};
class vollyball : public game
{
	public:

	   //	void display();
        void get()
	{
		cout<<"\n enter the point of game of vollyboll ";
		cin>>point;

	}
        void display ()
	{

		cout<<"\n point s of vollyboll game : "<<point;
	}

};


/*class badminton : public game
{

	public:

	    //	void display();

};
void badminton :: get()
{
	cout<<"\n enter the point of game of vollyboll ";
	cin>>point;

}
void badminton :: display ()
{

	cout<<"\n point s of vollyboll game : "<<point;
}

class circket : public  game
{
	public:

	      //	void display();

};
void circket :: get()
{
	cout<<"\n enter the point of game of circket ";
	cin>>point;

}
void circket :: display ()
{

	cout<<"\n point s of circket game : "<<point;
} */



void main()
{
	  game *g;
	  vollyball v;
	//  circket c;
	//badminton b;
	  clrscr();

	  g=&v;
	  g->get();
	  g->display();

       /*	  g=&c;
	  g->get();
	  g->display();

	  g=&b;
	  g->get();
	  g->display();     */



	 //  v=&vollyball;
	 // c=&badminton;
	  //b=&t;

	 // v->display();
	//  c->display();
	 // b->display();

	 /*b.get();
	 b.display();
	 c.get();
	 c.display();
	 v.get();
	 v.display();*/

	  getch();


}