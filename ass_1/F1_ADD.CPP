#include<iostream.h>
#include<conio.h>

class add
{
	public:
		add()
		{
		}
		add(int a,int b=2,int c=3)
		{
			cout<<"Addition of Three No. -->"<<a+b+c;
		}
};
void main()
{
	clrscr();
	add a(1);
	getch();
}