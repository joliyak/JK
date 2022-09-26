#include<stdio.h>
#include<conio.h>
#include<dos.h>

int m=0;
int s=0;
int h=0;

static int x=30;
static int y=10;
void disp();
void start()
{
       disp();

	do
	{      	s++;
		delay(500);
		gotoxy(40,13);
		printf("%d",s);


		if(s==59)
		{
			s=0;
			gotoxy(40,13);
			printf("  ");
			m++;
			gotoxy(36,13);
			printf("%d",m);
			if(m==59)
			{
				m=0;
				h++;
				gotoxy(32,13);
				printf("%d",h);


			}

		}
		else
		{
		}



	}while(!kbhit());

}
void disp()
{
	int i;
	gotoxy(40,11);
	printf("s");
	gotoxy(36,11);
	printf("m");
	gotoxy(32,11);
	printf("h");

	for(i=0;i<8;i++)
	{
		gotoxy(x,12);
		printf("_");
		x++;

	}
	x=30;
	for(i=0;i<8;i++)
	{
		gotoxy(x,14);
		printf("_");
		x++;

	}
	y=13;
	for(i=0;i<2;i++)
	{
		gotoxy(30,y);
		printf("|");
		y++;

	}
	y=13;
	for(i=0;i<2;i++)
	{
		gotoxy(34,y);
		printf("|");
		y++;

	}
	for(i=0;i<5;i++)
	{
		gotoxy(x,12);
		printf("_");
		x++;

	}
	x=35;
	for(i=0;i<8;i++)
	{
		gotoxy(x,14);
		printf("_");
		x++;

	}
	y=13;
	for(i=0;i<2;i++)
	{
		gotoxy(38,y);
		printf("|");
		y++;

	}
	y=13;
	for(i=0;i<2;i++)
	{
		gotoxy(42,y);
		printf("|");
		y++;

	}

}
void stop()
{
	disp();
	printf("\n\n\n\th\t\tm\t\ts");
	printf("\n\n\n\t%d\t\t%d\t\t%d",h,m,s);

}
void main()
{
	int ch;
	clrscr();

	do{
		printf("\n enter a to satrt : ");
		printf("\n enter s to stop : ");
		printf("\n enter w to exit :");

		ch=getch();

		switch(ch)
		{
			case 'a' : start();
				 break;

			case 's' : stop();
				 break;

			case 'w': printf("\n bye,,bye,,");
				 break;

			default : printf("\n enter the proper choice: ");
				  break;



		}



	}while(ch!='w');

	getch();



}
