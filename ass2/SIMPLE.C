/*      THIS PROGRAM IS A VERY SIMPLE TO CREATE TO
  */
#include<stdio.h>
#include<conio.h>
#define n 2

struct node    //  STURCUTE  IS CREATED
{
	int roll;
	char name[20];
	int  per;

};

struct node *s; //STRUCTURE OBJECT ARE CREATED
int i;

void insert () // INSERT FUNCTION TO INSERT DATA
{

	printf("\n RECORED ARE INSERT PLEASE PRESS ANY BUTTON \n");
	getch();
	for(i=0;i<n;i++)
	{
		printf("\n ENTER YOUR ROLL NO : ");
		scanf("%d",&s[i].roll);
		fflush(stdin);
		printf("\n ENTER YOUR NAME : ");
		scanf("%s",s[i].name);
		printf("\n ENTER YOUR PERSENTAGE : ");
		scanf("%d",&s[i].per);
		printf("\n\n");
	}
	printf("\n\n\t\t  SAVED DATA ");
	getch();

}

void display()//DISPLAY FUNCTION  TO DISPLAY ALL DATA
{

	printf("\n DATA ARE DISPLAY PLEASE PRESS ANY BUTTON \n");
	getch();

	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t%d",s[i].roll,s[i].name,s[i].per);

	}

}

void main()// THE MAIN FUNCTION
{
	int ch;
	clrscr();

	do{
		printf("\n±±±±±±±±±±±±±±±±±±±±±±±±±±± MAIN MANU ±±±±±±±±±±±±±±±±±±±±±±±±");
		printf("\nÜÜ1. CREATE  ");
		printf("\nÜÜ2. DISPLAY  ");
		printf("\nÜÜ3. EXIT  ");
		printf("\n±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");

		printf("\n ENTER YOUR CHOICE : ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1 : insert();
				  break;

			case 2 :  display();
				  getch();
				   break;

			case 3 : printf("\n BYE...BYE....");
				  getch();
				  break;

			default : printf("\n ENTER THE PROPER CHOICE : ");
				   break;


		}
		clrscr();

	}while(ch!=3);


	getch();

}