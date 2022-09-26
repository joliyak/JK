#include<stdio.h>
#include<conio.h>

struct node
{
	int data;
	struct node * next;
	struct node * prv;


};
struct node * first=NULL;
struct node * last=NULL;
struct node * temp=NULL;

void insert()
{
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\n enter the data :- ");
	scanf("%d",&temp->data);
	temp->prv=last;

	if(first==NULL)
	{
		first=temp;

	}
	else
		last->next=temp;

	temp->next=NULL;
	last=temp;



}
void display()
{

	for(temp=first;temp!=NULL;temp=temp->next)
	{
		printf("\n%d ",temp->data);

	}


}
void display1()
{

	for(temp=last;temp!=NULL;temp=temp->prv)
	{
		printf("\n%d ",temp->data);

	}


}
void insert_first()
{
	temp=(struct node *)malloc(sizeof(struct node));
	printf("\n enter the data :- ");
	scanf("%d",&temp->data);
	temp->next=first;
	first->prv=temp;
	temp->prv=NULL;
	first=temp;



}

void insert_between()
{
	int se;
	int flag=0;
	struct node *t,*newnode;

	printf("\n enter the search element :- ");
	scanf("%d",&se);

	for(temp=first;temp!=NULL;temp=temp->next)
	{
		if(se==temp->data)
		{
			flag=1;
			t=temp;
			break;
		}

	}

	if(flag==1)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("\n enter the data :- ");
		scanf("%d",&newnode->data);

		newnode->next=t->next;
		t->next=newnode;

		newnode->prv=t;
		newnode->next->prv=newnode;


	}



}

void delet_first()
{
	temp=first;
	first=first->next;
	free(temp);
	first->prv=NULL;

}
void delet_last()
{
	temp=last;
	last=last->prv;
	free(temp);
	last->next=NULL;



}

void delet_between()
{
	int se;
	int flag=0;
	struct node *t,*tt,*ttt;

	printf("\n enter the search element :- ");
	scanf("%d",&se);

	for(temp=first;temp!=NULL;temp=temp->next)
	{
		if(se==temp->data)
		{
			flag=1;
			t=temp;
			break;
		}

	}

	for(temp=first;temp!=NULL;temp=temp->next)
	{
		if(se==temp->next->data)
		{
			tt=temp;
			break;
		}

	}
	for(temp=last;temp!=NULL;temp=temp->prv)
	{
		if(se==temp->prv->data)
		{
			ttt=temp;
			break;
		}

	}

	if(flag==1)
	{
		tt->next=t->next;
		t->next=NULL;
		free(t);
		ttt->prv=t->prv;
		t->prv=NULL;
		free(t);

	}


}

void search()
{
	int se;
	int flag=0;
	int flag2=0;
	struct node *t,*tt,*ttt;

	printf("\n enter the search element :- ");
	scanf("%d",&se);

	for(temp=first;temp!=NULL;temp=temp->next)
	{
		if(se==temp->data)
		{
			flag=1;
			break;
		}

	}
	for(temp=last;temp!=NULL;temp=temp->prv)
	{
		if(se==temp->prv->data)
		{
			flag2=1;
			break;
		}

	}
	if(flag==1&&flag2==1)
	{
		printf("\n FOUND THE data :- ");
	}
	else
		printf("\n NOT FOUND data :- ");
}
void update()
{
	int se;
	printf("\n enter the search element :- ");
	scanf("%d",&se);

	for(temp=last;se!=temp->data&&temp!=NULL;temp=temp->prv)
	{


	}
	if(se==temp->data)
	{
		printf("\n FOUND THE data :- ");
		printf("\n enter the new data :- ");
		scanf("%d",&temp->data);
	}
	else
		printf("\n NOT FOUND data :- ");
}


void sort()
{
	struct node *t1,*t2;
	int x;
	for(t1=first;t1!=NULL;t1=t1->next)
	{
		for(t2=first;t2!=NULL;t2=t2->next)
		{
			if(t1->data<=t2->data)
			{
				 x=t1->data;
				 t1->data=t2->data;
				 t2->data=x;


			}

		}

	}


}

void main()
{
	int ch;
	clrscr();

	do{
		printf("\n enter 1 to insert_last :- ");
		printf("\n enter 2 to dis next :- ");
		printf("\n enter 3 to dis prv :- ");
		printf("\n enter 4 to insert_first :- ");
		printf("\n enter 5 to insert_between:-  ");
		printf("\n enter 6 to delet_last :- ");
		printf("\n enter 7 to delet_first:- ");
		printf("\n enter 8 to delet_between :- ");
		printf("\n enter 9 to search :- ");
		printf("\n enter 10 to update  :- ");
		printf("\n enter 11 to sort  :- ");
		printf("\n enter 0 to exit :- ");

		printf("\n etner your choice :- ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1 : insert();
				    break;

			case 2 : display();
				    break;

			case 3 : display1();
				    break;

			case 4  : insert_first();
				    break;

			case 5  : insert_between();
				    break;

			case 6  : delet_last();
				    break;

			case 7  : delet_first();
				    break;

			case 8  : delet_between();
					 break;

			case 9  : search();
				    break;

			case 10 : update ();
				    break;

			case 11 : sort();
				   break;

			case 0 : printf("\n BYE....BYE..");
				   break;

			default : printf("\n enter proper choice:- ");
				   break;

		}



	}while(ch!=0);

	getch();
}