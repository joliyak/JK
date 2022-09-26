#include<iostream.h>
#include<conio.h>

class matrix
{
	public :
		int a[3][3];

		friend istream &operator >>(istream &in, matrix &m)
		{
			cout<<"\n Enter 3X3 Mtrix ->\n ";
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					in>>m.a[i][j];
				}
				cout<<"\n";
			}
			return in;
		}
		friend ostream &operator <<(ostream &out,matrix &m)
		{
			//out<<d.x<<endl;
			//out<<d.y<<endl;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					out<<"\t"<<m.a[i][j];
				}
				out<<"\n";
			}
			return out;
		}
		friend matrix operator +(matrix &m1 ,matrix &m2)
		{
			int i,j;
			matrix temp;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					temp.a[i][j]=m1.a[i][j]+m2.a[i][j];

				}
			}
			return temp;
		}
};
void main()
{
	matrix m1,m2,temp;
	clrscr();
	cin>>m1;
	cin>>m2;
	temp=m1+m2;
	cout<<temp;
	getch();

}

