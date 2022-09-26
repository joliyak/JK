#include<iostream.h>
#include<conio.h>

class palindrome
{
	public:
		long int no,jk;
		long int temp,rem;
		palindrome()
		{
			no=121;
			temp=no;
			rem=0;
			jk=0;
			while(temp!=0)
			{
				jk=temp%10;
				rem=(rem*10)+jk;
				temp=temp/10;
			}
		}
		void put()
		{
			if(no==rem)
				cout<<"\nPalindrome ";
			else
				cout<<"\nNot Palindrome !!!";
		}
};
void main()
{
	clrscr();
	palindrome p;
	p.put();
	getch();
}