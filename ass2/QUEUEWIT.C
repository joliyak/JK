#include<stdio.h>
#include<conio.h>
#define SIZE 10

int queue[SIZE],front=-1,rear=-1,i=0;

void insert()
{

	if(rear==SIZE-1)
	{
		printf("\n stock is full ");
		getch();
	}
	else
	{
		rear++;
		printf("\n enter the data : ");scanf("%d",&queue[rear]);
	}
	if(front==-1)
		front++;


}
void dis()
{
	if(front==-1)
		printf("\n empty : ");
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",queue[i]);
		}
	}

}
void delet()
{
	if(front==-1)
		printf("\n empty ");
	else if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
		front++;


}
void main()
{
	int ch;
	clrscr();

		do{

			printf("\n enter 1 to insert the data : ");
			printf("\n enter 2 to display the recored : ");
			printf("\n enter 3 to delete the recored : ");
			printf("\n enter 4 to exit ");
			printf("\n enter your choice : ");
			scanf("%d",&ch);

			switch(ch)
			{
				case 1: insert();
					 break;

				case 2 : dis();
					 getch();
					 break;

				case 3 : delet();
					 break;

				case 4 : printf("\n BYE .. BYE..");
					 getch();
					 break;

				default: printf("\n enter the proper choice : ");
					 getch();
					 break;


			}

			  clrscr();
		}while(ch!=4);

	getch();


}
