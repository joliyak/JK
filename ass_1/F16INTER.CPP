#include<iostream.h>
#include<conio.h>

class interest
{
	public:
		void calc(float r,float n=40,float p=20)
		{
			cout<<"\nSimple Interest ->"<<p*n*r/100;
		}
};
void main()
{
	clrscr();
	interest i;
	float t;
	cout<<"\nEnter Rate of Interest ->";
	cin>>t;
	i.calc(t);
	getch();
}