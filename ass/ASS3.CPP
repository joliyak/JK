#include<iostream.h>
#include<conio.h>

class std
{
	int a,b,c;
		public:
			void get();
			void cal()
			{
				if(a<b&&a<c||a<c&&a<b)
					cout<<"\n a is small:- "<<a<<endl;
				else if(b<a&&b<c&&b<c&&b<a)
					cout<<"\n b is small:- "<<b<<endl;
				else
					cout<<"\n c is small:- "<<c<<endl;
			}




};
inline void std ::get()
{
	cout<<"\n etner a:-  ";
	cin>>a;
	cout<<"\n enter b:- ";
	cin>>b;
	cout<<"\n enter c:- ";
	cin>>c;


}

void main()
{
	clrscr();
	std s;
	s.get();
	s.cal();
	getch();

}
