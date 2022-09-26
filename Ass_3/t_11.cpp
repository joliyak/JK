#include<iostream.h>
#include<conio.h>
#include<string.h>

class media
{
	public:
        	char title[20];
                float price;
                media()
                {
                	strcpy(title,"media");
                        price=2000;
                }
                void display();
};
void media::display()
{
	cout<<"\n title is        :  "<<title;
        cout<<"\n price is        :  "<<price;

}
class 	book
{
	public:
        	int pages;
                	book()
                        {
                        	pages=200;
                        }

                        void display();
};
void book :: display()
{
	cout<<"\n book pages is   :  "<<pages;
}
class tape
{
	public:
        	float time;
                	tape()
                        {
                        	time=2.1;
                        }
                        void display();
};
void tape::display()
{
	cout<<"\n time is         :  "<<time;
}

void main()
{
	clrscr();

        media m;
        m.display();
        book b;
        b.display();
        tape t;
        t.display();

        getch();

}