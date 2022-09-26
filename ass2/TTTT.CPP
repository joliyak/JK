#include<iostream.h>
#include<conio.h>

class metrix
{
	public:
		int no[3][3];
		int i,j,k;

		void  get()
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cin>>no[i][j];

				}

				cout<<"\n";
			}



		}

		void put()
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<"\t"<<no[i][j];

				}
				cout<<"\n";
			}

		}

		friend metrix operator +(metrix m1 ,metrix m2)
		{
			int i,j;
			metrix temp;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					temp.no[i][j]=m1.no[i][j]+m2.no[i][j];

				}
			}
			return temp;
		}

		friend metrix operator -(metrix m1 ,metrix m2)
		{
			int i,j;
			metrix temp;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					temp.no[i][j]=m1.no[i][j]-m2.no[i][j];

				}
			}
			return temp;
		}

		friend metrix operator *(metrix m1 ,metrix m2)
		{
			int i=0,j=0,k=0;
			metrix temp;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
				   temp.no[i][j]=0;
				   for(k=0;k<3;k++)
				   {
					temp.no[i][j]+=m1.no[i][k]*m2.no[k][j];
				   }

				}
			}
			return temp;
		}

};
void main()
{
	metrix m1,m2,m3;
	clrscr();
	cout<<"\n enter first metrix:\n ";
	m1.get();
	cout<<"\n enter second metrix:\n ";
	m2.get();
	cout<<"\n addition of two metrix :\n ";
	m3=m1+m2;
	m3.put();
	cout<<"\n subtraction of two metrix : ";
	m3=m1-m2;
	m3.put();
	cout<<"\n multiplication of two metrix : ";
	m3=m1*m2;
	m3.put();

	getch();

}