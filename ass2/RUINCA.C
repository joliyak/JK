#include<stdio.h>
#include<conio.h>
#include<dos.h>

 int y1=1;
 int x1=25;
 int t1=24;

 int y2=8;
 int x2=34;
 int t2=33;

 int y3=1;
 int x3=40;
 int t3=41;

 int y4=19;
 int x4=12;
 int t4=11;

 int count=0;

static int y=23;
static int x=35;
static int t=34;
static int b;
static int c;
static int d;
static int g;
static int k;
static int v;

void run();
void down()
{

	int p;
	int q;
	p=x;
	q=t;




	clrscr();
	run();


	if(y>22)
		y=21;
	else
	{

		gotoxy(x,y);
		printf("±");
		v=y;
		y++;
		b=y;
		gotoxy(t,y);
		printf("±±±");
		y++;
		c=y;
		gotoxy(p,y);
		printf("±");
		y++;
		d=y;
		gotoxy(q,y);
		printf("±±±");
		y++;
		g=y;

	}

}


void up()
{


	int p;
	int q;
	static int h;
	p=x;
	q=t;



	clrscr();

	run();

	if(y<9)
	    y=9;
	else
	{


		h=y;
		h=h-3;
		b=y-4;
		v=b;
		gotoxy(x,h);
		printf("±");
		gotoxy(t,y);
		printf("±±±");
		y--;
		c=y;
		gotoxy(p,y);
		printf("±");
		y--;
		d=y;
		gotoxy(q,y);
		printf("±±±");
		y--;
		g=y;

	 }


}
void right();
void left();
void up();
void right()
{


	int p;
	int q;


	p=x;
	q=t;


	clrscr();
	run();

	gotoxy(x,b);
	printf("±");
	x=x+6;
	gotoxy(t,c);
	printf("±±±");
	t=t+6;
	gotoxy(p,d);
	printf("±");
	p=p+6;
	gotoxy(q,g);
	printf("±±±");
	q=q+6;



}
void left()
{

	int p;
	int q;


	p=x;
	q=t;



	clrscr();
	run();

	gotoxy(x,b);
	printf("±");
	x=x-6;
	gotoxy(t,c);
	printf("±±±");
	t=t-6;
	gotoxy(p,d);
	printf("±");
	p=p-6;
	gotoxy(q,g);
	printf("±±±");
	q=q-6;




}

void bollets()
{
	int f;
	int i;
	int j;
	f=v-1;
	for(i=f;i>3;i--)
	{

		gotoxy(x,i);
		printf("±");
		gotoxy(x,i);
		printf(" ");
		delay(10);

	}

}

void run()
{

	int p1,p2,p3,p4;
	int q1,q2,q3,q4;
	int i;
	p1=x1;
	q1=t1;

	p2=x2;
	q2=t2;

	p3=x3;
	q3=t3;

	p4=x4;
	q4=t4;

	clrscr();


		gotoxy(x1,y1);textcolor(RED);
		cprintf("ÍÍÍÍÍ");
		y1++;
		gotoxy(t1+3,y1);textcolor(RED);
		cprintf("³");
		y1++;
		gotoxy(p1,y1);textcolor(RED);
		cprintf("ÍÍÍÍÍ");
		y1++;
		gotoxy(q1+3,y1);textcolor(RED);
		cprintf("³");
		y1++;

		if(y1>=23)
		{
			count++;
			if(count==1)
			{
				y1=2;
				x1=25;
				t1=24;

			}
			else if(count==2)
			{
				y1=2;
				x1=17;
				t1=16;

			}
			else if(count==3)
			{
				y1=2;
				x1=50;
				t1=49;
			}
			else if(count==4)
			{
				y1=2;
				x1=17;
				t1=16;

			}


		}


		gotoxy(x2,y2);textcolor(BLUE);
		cprintf("ÍÍÍÍÍ");
		y2++;
		gotoxy(t2+3,y2);textcolor(BLUE);
		cprintf("³");
		y2++;
		gotoxy(p2,y2);textcolor(BLUE);
		cprintf("ÍÍÍÍÍ");
		y2++;
		gotoxy(q2+3,y2);textcolor(BLUE);
		cprintf("³");
		y2++;

		if(y2>=23)
		{
			y2=2;

		}



		gotoxy(x3,y3);textcolor(GREEN);
		cprintf("ÍÍÍÍÍ");
		y3++;
		gotoxy(t3+3,y3);textcolor(GREEN);
		cprintf("³");
		y3++;
		gotoxy(p3,y3);textcolor(GREEN);
		cprintf("ÍÍÍÍÍ");
		y3++;
		gotoxy(q3+3,y3);textcolor(GREEN);
		cprintf("³");
		y3++;

		if(y3>=25)
		{
			y3=2;
			x3=34;
			t3=33;
		      //	printf("\n hello");

		}



		gotoxy(x4,y4);
		printf("ÍÍÍÍÍ");
		y4++;
		gotoxy(t4+3,y4);
		printf("³");
		y4++;
		gotoxy(p4,y4);
		printf("ÍÍÍÍÍ");
		y4++;
		gotoxy(q4+3,y4);
		printf("³");
		y4++;


		if(y4>=23)
		{
			y4=5;
			x4=25;
			t4=24;
		}

	  //	delay(600);

	// }while(!kbhit());




}

void main()
{

//	int a;

	char name[10];
	char ch;
	clrscr();
	gotoxy(22,8);
	printf("enter your name :");
	scanf("%s",&name);
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
			bollets();

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