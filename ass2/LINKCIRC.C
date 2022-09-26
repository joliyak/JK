#include<stdio.h>
#include<conio.h>

struct node
{
	int roll;
	struct node * next;
};
struct node * front=NULL;
struct node * rear=NULL;
struct node * temp=NULL;

void insert()
{
	temp=(struct node *)malloc(sizeof(struct node ));
	printf("\n enter the roll no : ");
	scanf("%d",&temp->roll);

	if(front==NULL)
		front=temp;
	else
		rear->next=temp;

	temp->next=front;
	rear=temp;

}

void display()
{
	struct  node *t;
	if(front==NULL)
		printf("\n empty : ");
	else
	{
		temp=front;
		do
		{
			printf("\n %d",temp->roll);
			temp=temp->next;

		}while(temp!=front);
	}

}

void delet()
{
	if(front==NULL)
		printf("\n empty ");
	else if(front==rear)
	{
		front=NULL;
		rear=NULL;
	}
	else
	{
	   temp=front;
	   front=front->next;
	   rear->next=front;

	}

}
void main ()
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

				case 2 : display();
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
