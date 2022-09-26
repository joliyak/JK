#include<iostream.h>
#include<conio.h>

class matrix
{
	public:
		int a[3][3];
		int x,y;
		matrix()
		{
			cout<<"\nEnter 3x3 Matrix -->\n";
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cin>>a[i][j];
				}cout<<"\n";
			}
		}
		void row()
		{
			for(int i=0;i<3;i++)
			{
				x=0;
				for(int j=0;j<3;j++)
				{
					x=x+a[i][j];
				}
				cout<<"\nRow Total ->"<<x;
			}
		}
		void column()
		{
			for(int i=0;i<3;i++)
			{
				y=0;
				for(int j=0;j<3;j++)
				{
					y=y+a[j][i];
				}cout<<"\n Column Total ->"<<y;
			}
		}
		void put()
		{
			cout<<"\n3x3 Matrix -->\n";
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cout<<"\t"<<a[i][j];
				}cout<<"\n";
			}
		}
};
void main()
{
	clrscr();
	matrix m;
	m.put();
	m.row();
	m.column();
	getch();
}