#include<iostream.h>
#include<conio.h>
#include<string.h>

int sto;
int i=0;
class product
{
	public:
		int p_code;
		char p_name[10];
		product()
		{
			p_code=1;
			strcpy(p_name,"key");

		}

};
class stock : public product
{
	public:
		int value;
		int found;
			stock()
			{     sto=1000;
			}


		void update()
		{
			if(found==1)
			{
				sto=sto-value;
			}
			else if(found==2)
			{
				sto=sto+value;
			}
		}

         	void dis()
		{
			cout<<"\n\n\t\t stock info : "<<p_code<<"  "<<p_name<<"  "<<sto<<"\n";

		}


};
class sales: public  stock
{
	public:



		void sal()
		{

			cout<<"\n how many stock are decrease : ";cin>>value;
			found =1;
			update();
			dis();
		}


};
class purchaes: public  stock
{
	public:



		void pur()
		{
                	cout<<"\n stock "<<sto;
			cout<<"\n how many stock are increase : ";cin>>value;
			found=2;
			update();
			dis();
		}

};
void main()
{
	int ch;
	clrscr();
         stock s1;

        sales s;
	purchaes p;



	do{
		cout<<"\n enter 1 to sales ";
		cout<<"\n enter 2 to purcheaes";
		cout<<"\n enter 3 to show";
                cout<<"\n enter 0 to exit";

		cout<<"\n enter your choice : ";
		cin>>ch;

		switch(ch)
		{
			case 1: s.sal();
				 getch();
				 break;

			case 2 : p.pur();
				 getch();
				 break;

                        case 3 : s1.dis();
                        	 getch();
                                 break;

			case 0 : cout<<"\n BYE...BYE..";
				 getch();
				 break;

			default: cout<<"\n enter the proper choice";
				 getch();
				 break;

		}
		clrscr();

	}while(ch!=0);

	getch();

}