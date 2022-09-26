#include<stdio.h>
#include<conio.h>
#include<dos.h>

static int a=10;
static int b=10;
static int x=1,x1=30;
static int y,y1=0,y2=0;
int p=0;
void run()
{

	int k=0;

	int i;
	clrscr();

	label:
	do{

		gotoxy(x,y);
		printf("%d",k);
		delay(100);
		gotoxy(1,y);
		printf(" ");
		y++;

			if(y==23)
				goto k;

		     gotoxy(a,b);
		     printf("%d",p);

	   }while(!kbhit());

		k:
	       if(y==23)
		{
			do{
			gotoxy(x1,y1);
			printf("%d",k);
			delay(100);
			gotoxy(x1,y1);
			printf(" ");
			y1++;

			  if(y1==23)
				y1=2;



			     gotoxy(a,b);
			     printf("%d",p);

			}while(!kbhit());



		}




}
void up()
{

	if(b<2)
		b=2;

	else if(b>24)
		b=24;
	else
	{
		gotoxy(a,b);
		printf(" ");
		b--;
		gotoxy(a,b);
		printf("%d",p);
		run();

	}




}
void down()
{

	if(b<2)
		b=2;

	else if(b>24)
		b=24;
	else
	{
		gotoxy(a,b);
		printf(" ");
		b++;
		gotoxy(a,b);
		printf("%d",p);
		run();

	}


}
void right ()
{

	if(a<2)
		a=2;

	else if(a>80)
		a=80;
	else
	{

		gotoxy(a,b);
		printf(" ");
		a++;
		gotoxy(a,b);
		printf("%d",p);
		run();

	}



}
void left()
{

	if(a<2)
		a=2;

	else if(a>80)
		a=80;
	else
	{
		gotoxy(a,b);
		printf(" ");
		a--;
		gotoxy(a,b);
		printf("%d",p);
		run();

	}


}
void main()
{

	int ch;
	clrscr();


	do{
	      /*	 gotoxy(5,1);
		 printf("enter A : to  down ");
		 gotoxy(5,2);
		 printf("enter W : to  up ");
		 gotoxy(5,3);
		 printf("enter h : to  right ");
		 gotoxy(5,4);
		 printf("enter l : to  left");
		 gotoxy(5,5);
		 printf("enter b : to  display");
		 gotoxy(5,6);
		 printf("enter o : to  exit");*/



		ch=getch();



		if(ch==27)
		{
			 printf("BYE...BYE..");
			   break;
		 }
		else if(ch==77)
		{
		       //	clrscr();
		     //	printf("\n\n\n\t\t\t\t\\t\tright");

		     right();
		     //	ch='f';
		}
		else if(ch==75)
		{
		      //	clrscr();
		       //	printf("\n\n\n\t\t\t\t\\t\tleft");
		       //	ch='l';
		       left();

		}
		else if(ch==72)
		{
		      //	clrscr();
		       //	printf("\n\n\n\t\t\t\t\\t\tup");
		       //	ch='w';
		       up();


		}
		else if(ch==80)
		{
		     //	clrscr();
		      //	printf("\n\n\n\t\t\t\t\\t\tdown");
			//	    ch='a';
			down();

		}
		else if(ch==13)
		{
			run();

		}
		else
		{
		       //	clrscr();
		      //	printf("\n\n\n\t\t\t\t\\t\tdown",a);

		}




	     /*	 switch(ch)
		 {
			case 'a' : down();
				   break;
			case 'w' : up();
				   break;
			case 'f' : right();
				   break;
			case 'l' : left();
				   break;
			case 'b' : dis();
				    break;
			case 'o' :
				   gotoxy(20,10);
				   printf("BYE...BYE..");
				   break;
			default:   printf("\n enter proper choice:");
				   break;


		 }      */



	}while(ch!=27);

	getch();

}



