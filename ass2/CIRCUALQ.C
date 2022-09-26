#include<stdio.h>
#include<conio.h>
#define SZ 10

int queue[SZ],front=-1,rear=-1;
int i;
void insert()
{

	if((front==0&&rear==SZ-1)||(front==rear+1))
        	printf("\n stock is full ");
        else
	{
		 if(rear==SZ-1)
        		rear=0;
                 else
                 	rear++;

                 printf("\n\t\t\6 enter the data : ");
                 scanf("%d",&queue[rear]);

        }

        if(front==-1)
        	front++;

}

void display()
{
	if(front==-1)
        	printf("\n empty");
	else if(rear>=front)
        {
             //	printf("\t\6");
        	for(i=front;i<=rear;i++)
                {
                	printf("\n\t\t\5 %d",queue[i]);
                }


        }
        else
        {
        	for(i=front;i<SZ;i++)
                {
                	printf("\n\t\t%d",queue[i]);
                }
                for(i=0;i<=rear;i++)
                {
                	printf("\n\t\t%d",queue[i]);
                }
        }

}

void delet()
{
	if(front==-1)
        	printf("\n empty");
        else if(front==rear)
        	front=rear=-1;
        else if(front==SZ-1)
        	front=0;
        else
        	front++;

}
void main()
{
	int ch;
	clrscr();

		do{

			printf("\n\t\t\3  ENTER 1 to insert the data : ");
			printf("\n\t\t\3  ENTER 2 to display the recored : ");
			printf("\n\t\t\3  ENTER 3 to delete the recored : ");
			printf("\n\t\t\3  ENTER 4 to exit ");
			printf("\n\t\t\3  ENTER your choice : ");
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



