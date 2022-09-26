#include<stdio.h>
#include<conio.h>

struct node
{
	int data;
	struct node *  next;

};

struct node * first=NULL;
struct node * last=NULL;
struct node * temp=NULL;


void insert ()
{
   temp=(struct node*)malloc(sizeof(struct node));
   printf("\n enter the data ;- ");
   scanf("%d",&temp->data);

   if(first==NULL)
	first=temp;
   else
	last->next=temp;

  temp->next=NULL;
   last=temp;

}

void display()
{

	if(first==NULL)
		printf("\n empty:-");
	else
	{

		temp=first;
		while(temp!=NULL)
		{
			printf("\n%d",temp->data);

			temp=temp->next;
		}

	}

}
void insert_first()
{
   temp=(struct node*)malloc(sizeof(struct node));
   printf("\n enter the data ;- ");
   scanf("%d",&temp->data);

   if(first==NULL)
	printf("\n no data in list:- ");
   else
	    temp->next=first;

   first=temp;

}
void insert_between()
{
	int se;
	int flag=0;
	struct node * newnode;

	   printf("\n enter the search element := ");
	   scanf("%d",&se);

	for(temp=first;temp!=NULL;temp=temp->next)
	{
		if(se==temp->data)
		{
			flag=1;
			break;

		}
	}


	if(flag==1)
	{

		   newnode=(struct node*)malloc(sizeof(struct node));
		   printf("\n enter the data ;- ");
		   scanf("%d",&newnode->data);

		newnode->next=temp->next;
		temp->next=newnode;

	}

}

void delet_first()
{
	if(first==NULL)
		printf("\n empty");
	else
	{

	    temp=first;
	    first=first->next;
	    free(temp);

	}

}

void delet_last()
{
	struct node *t;
	for(temp=first;temp->next!=NULL;temp=temp->next)
	{
		t=temp;
	}
	t->next=NULL;
	free(last);

}
void delet_between()
{
	struct node * t,*tt;
	int se;
	printf("\n enter the search element :- ");
	scanf("%d",&se);

	for(temp=first;temp!=NULL;temp=temp->next)
	{
		if(se==temp->next->data)
		{
			printf("\n hello");
			t=temp;
			break;
		}
	}
	for(temp=first;temp!=NULL;temp=temp->next)
	{
		if(se==temp->data)
		{
			tt=temp;
			break;
		}
	}

	t->next=tt->next;
	free(tt);

}

void main()
{
	int ch;
	clrscr();

	do{
		printf("\n enter 1 to insert_last :- ");
		printf("\n enter 2 to display :- ");
		printf("\n enter 3 to insert_first :- ");
		printf("\n enter 4 to insert_between:-  ");
		printf("\n enter 5 to delet_first :- ");
		printf("\n enter 6 to delet_last:- ");
		printf("\n enter 7 to delet_between :- ");
		printf("\n enter 8 to exit :- ");

		printf("\n etner your choice :- ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1 : insert();
				    break;

			case 2 : display();
				    break;

			case 3  : insert_first();
				    break;

			case 4  : insert_between();
				    break;

			case 5 :  delet_first();
				  break;

			case 6 : delet_last();
				 break;

			case 7 : delet_between();
				  break;

			case 8 : printf("\n BYE....BYE..");
				   break;

			default : printf("\n enter proper choice:- ");
				   break;

		}



	}while(ch!=8);

	getch();
}