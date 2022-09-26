#include<stdio.h>
#include<conio.h>
#define SZ 10

int stack[SZ],top=-1;
int i=0;
void push()
{
	if(top==SZ-1)
		printf("\n stack is full");
	else
	{
		top++;
		printf("\n enter the data ");
		scanf("%d",&stack[top]);

	}

}
void display()
{
	if(top==-1)
		printf("\n empty ");
	else
	{  for(i=top;i>=0;i--)
		printf("\n%d",stack[i]);

	}

}
void pop()
{
	if(top==-1)
		printf("\n empty ");
	else
		top--;


}
void main()
{
	int ch;
	clrscr();

		do{

			printf("\n\t\t\3  ENTER 1 to push the data : ");
			printf("\n\t\t\3  ENTER 2 to display the recored : ");
			printf("\n\t\t\3  ENTER 3 to pop the recored : ");
			printf("\n\t\t\3  ENTER 4 to exit ");
			printf("\n\t\t\3  ENTER your choice : ");
			scanf("%d",&ch);

			switch(ch)
			{
				case 1: push();
					 break;

				case 2 : display();
					 getch();
					 break;

				case 3 : pop();
					 break;

				case 4 : printf("\n\n\n\t\t\3\3\3 BYE .. BYE..\3\3\3");
					 getch();
					 break;

				default: printf("\n\t\t enter the proper choice : ");
					 getch();
					 break;


			}

			  clrscr();
		}while(ch!=4);

	getch();


}



