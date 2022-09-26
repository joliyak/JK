void del()
{
	int se,flag=0;
	int i=0;

	struct node * temp,*t;
	FILE *fp,*f,*ff,*fp1;
	t=temp;
	f=fopen("try.txt","r");
	fseek(f,0,SEEK_SET);
	fscanf(f,"%d",&counter);
	printf("%d",counter);
	fclose(f);
	fp=fopen("tr.txt","r");
	fp1=fopen("temp1.txt","w");
	fseek(fp,0,SEEK_SET);
	printf("\n enter the search element : ");
	scanf("%d",&se);


	while(i<counter)
	{
		fread(temp,sizeof(struct node),1,fp);
	     //	printf("\n->%ld\t%s<-",temp->data,temp->name);
		if(se==temp->data)
		{
			flag=1;

		}
		else
		  fwrite(temp,sizeof(struct node),1,fp1);


	   i++;
	}
	fclose(fp);
	fclose(fp1);
	if(flag)
	{
		fp1=fopen("temp1.txt","r");
		fp=fopen("tr.txt","w");
		i=0;
		while(i<counter)
		{
			fread(temp,sizeof(struct node),1,fp1);
			fwrite(temp,sizeof(struct node),1,fp);
			i++;

		}


		counter--;
		count();
		fclose(fp);
		fclose(fp1);

	}
	else
		printf("\n not found ");

}

void show()
{

	int i=0;
	FILE *fp,*f;
	struct node * temp=NULL;
	f=fopen("try.txt","r");
	fseek(f,0,SEEK_SET);
	fscanf(f,"%d",&counter);
	printf("%d",counter);
	fclose(f);
	fp=fopen("tr.txt","r");
	fseek(fp,0,SEEK_SET);
	do
	{
		fread(temp,sizeof(struct node),1,fp);
		printf("\n%s\t%d\t%d",temp->iteam,temp->qty,temp->total);
		temp=temp->prev;
		i++;
	}while(i<counter);

	fclose(fp);

}
void count()
{

	FILE *fp=fopen("try.txt","w");
	fprintf(fp,"%d",counter);
	fclose(fp);


}
void disp()
{
	struct node*temp=last;
	while(temp!=NULL)
		{
			printf("%ld\t%s->",temp->data,temp->name);
			temp=temp->prev;
		}
}
void search ()
{
	int se,flag=0;
	int i=0;
	struct node * temp,*t;
	FILE *fp,*f;
	f=fopen("try.txt","r");
	fseek(f,0,SEEK_SET);
	fscanf(f,"%d",&counter);
	printf("%d",counter);
	fclose(f);
	fp=fopen("tr.txt","r");
	fseek(fp,0,SEEK_SET);
	printf("\n enter the search element : ");
	scanf("%d",&se);
	do
	{
		fread(temp,sizeof(struct node),1,fp);
	     //	printf("\n->%ld\t%s<-",temp->data,temp->name);
		if(se==temp->data)
		{
			flag=1;
			break;
		}
		i++;
		temp=temp->prev;

	}while(i<counter);
	if(flag==1)
	{
		printf("\n\t found the data ");
		printf("\n\n%ld\t%s",temp->data,temp->name);

	}
	else
		printf("\n not found the data ");


	fclose(fp);

}
void update ()
{
	int se,flag=0;
	int i=0;

	struct node * temp,*t;
	FILE *fp,*f,*ff,*fp1;
	t=temp;
	f=fopen("try.txt","r");
	fseek(f,0,SEEK_SET);
	fscanf(f,"%d",&counter);
	printf("%d",counter);
	fclose(f);
	fp=fopen("tr.txt","r");
	fp1=fopen("temp1.txt","w");
	fseek(fp,0,SEEK_SET);
	printf("\n enter the search element : ");
	scanf("%d",&se);


	do
	{
		fread(temp,sizeof(struct node),1,fp);
	     //	printf("\n->%ld\t%s<-",temp->data,temp->name);
		if(se==temp->data)
		{
			printf("\n enter the new infomation : ");
			scanf("%ld%s",&temp->data,&temp->name);
			flag=1;
		}
	     fwrite(temp,sizeof(struct node),1,fp1);
	     i++;
	}while(i<counter);
	fclose(fp);
	fclose(fp1);
	if(flag==1)
	{
		fp1=fopen("temp1.txt","r");
		fp=fopen("tr.txt","w");
		i=0;
		do
		{
			fread(temp,sizeof(struct node),1,fp1);
			fwrite(temp,sizeof(struct node),1,fp);
			i++;

		}while(i<counter);


		fclose(fp);
		fclose(fp1);

	}
	else
		printf("\n not found ");



}
void pass()
{
	char pass[10]={"24342434"};
	char p[10];
	char *name;
	int i;
	int y=8;
	clrscr();

	gotoxy(20,7);textbackground(BLUE);
	cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍLOGINÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
	gotoxy(20,16);textbackground(BLUE);
	cprintf("ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ");
	textbackground(BLACK);
	for(i=0;i<8;i++)
	{
		gotoxy(20,y);
		cprintf("³");
		y++;
	}
	y=8;
	for(i=0;i<8;i++)
	{
		gotoxy(54,y);
		cprintf("³");
		y++;
	}
	gotoxy(23,10);
	printf("enter the user name :");
	scanf("%s",name);
	gotoxy(23,12);
	printf("enter your password :");
	scanf("%s",p);
	if(strcmp(p,pass)==0)
	{	clrscr();
		printf("\n\n\n\n\t\t\t currect password ");
		found=1;
	}
	else

		printf("\n\n\n\n\t\t not currect password ");


	getch();



}
void main()
{
	int ch;
	clrscr();

 //   pass();
   // if(found==1)
   // {

		printf("\n±±±±±±±±±±±±±±±±±±±±±±±±±±± MAIN MANU ±±±±±±±±±±±±±±±±±±±±±±±±");
		printf("\n\nÜÜpress 1: add_recored: ");
		printf("\nÜÜpress 2: del for data: ");
		printf("\nÜÜpress 3: desplay for data: ");
		printf("\nÜÜpress 4: show for entier data: ");
		printf("\nÜÜpress 5: search the data: ");
		printf("\nÜÜpress 6: update the data: ");
		printf("\nÜÜpress 7: apand the data: ");
		printf("\nÜÜpress 0: exit:");
		printf("\n\n±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");



		 do
		 {
			printf("\n\n\tenter choice:-");
			scanf("%d",&ch);
			switch(ch)
				{
					case 1: add();
						break;
					case 2: del();
						break;
					case 3: disp();
						break;
					case 4: show();
						break;
					case 5: search();
						break;
					case 6: update();
						break;
					case 7: apand();
						break;
					case 0: printf("\n\t\tbye..bye...");
						break;
					default :printf("\n\t\tenter proper choice:");
						break;
				}



		}while(ch!=0);

 //     }
   //   else
   //   {
     //		printf("\n enter proper password");

      // }

       getch();

