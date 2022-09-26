#include<stdio.h>
#include<conio.h>
#define SIZE 10

int queue[SIZE],front=-1,rear=-1;

void insert()
{
	if((front==0&&rear==SIZE-1)||(front==rear+1))
	{
		printf("\n stock is full ");
		getch();
	}
	else
	{
		if(rear==SIZE-1)
			rear=0;
		else
			rear++;

			printf("\n enter the element : ");
			scanf("%d",&queue[rear]);


	}
	if(front==-1)
		front=0;


}
void dis()
{
	int i;
	if(front==-1)
		printf("\n empty ");
	else if(front<=rear)
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",queue[i]);
		}

	}
	else
	{
		for(i=front;i<SIZE;i++)
			printf("\n%d",queue[i]);
		for(i=0;i<=rear;i++)
			printf("\n%d",queue[i]);

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
	else if(front==SIZE-1)
		front=0;
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
