#include<iostream.h>
#include<conio.h>

class add
{
	public:
		//int a,b,c;
		add()
		{
		}
		void sum(int a,int b=2,int c=3)
		{
			cout<<"Addition of Three No. -->"<<a+b+c;
		}
};
void main()
{
	clrscr();
	add a;
	a.sum(1);
	getch();
}