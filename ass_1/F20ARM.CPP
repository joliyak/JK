#include<iostream.h>
#include<conio.h>
#include<math.h>

class arm
{
	public:
		int no,jk,r,i,temp,ans;
		arm()
		{
			cout<<"Enter No. ->";
			cin>>no;
			temp=no;
			i=0;
			while(temp!=0)
			{
				temp=temp/10;
				i++;
			}
			temp=no;
			ans=0;
			while(temp!=0)
			{
				r=temp%10;
				ans=ans+pow(r,i);
				temp=temp/10;
			}
			if(no==ans)
				cout<<"Armstrong ";
			else
				cout<<"Not !!!";
		}

};
void main()
{
	clrscr();
	arm a;
	getch();
}