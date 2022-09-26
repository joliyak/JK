#include<iostream.h>
#include<conio.h>

class min
{
	public:
		int a,b,c;
		min()
		{
			cout<<"Enter Value of A ->";
			cin>>a;
			cout<<"Enter Value of B ->";
			cin>>b;
			cout<<"Enter Value of C ->";
			cin>>c;
		}
		inline void small()
		{
			if(a<=b&&a<=c)
				cout<<"\nA";
			else if(b<=a&&b<=c)
				cout<<"\nB";
			else
				cout<<"\nC";
		}
};
void main()
{
	clrscr();
	min m;
	m.small();
	getch();
}