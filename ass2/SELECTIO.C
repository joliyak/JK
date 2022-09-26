#include<stdio.h>
#include<conio.h>

void  main()
{
	int no[10],i,j,n,temp;
	clrscr();

	printf("\n enter the how many value are insert : ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter the value : ");scanf("%d",&no[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(no[i]>no[j])
			{
				temp=no[i];
				no[i]=no[j];
				no[j]=temp;
			}
		}


	}

	for(i=0;i<n;i++)
	{
		printf("%d",no[i]);
	}

	getch();

}
