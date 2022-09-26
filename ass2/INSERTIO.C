#include<stdio.h>
#include<conio.h>

void main()
{
	int no[10],i,j,k,key,n;
	clrscr();

	printf("\n enter the how many data are insert : ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter the value : ");scanf("%d",&no[i]);

	}
	for(i=1;i<n;i++)
	{
		key=no[i];
		j=i-1;
		while(j>=0&&no[j]>key)
		{
			no[j+1]=no[j];
			j--;

		}

		no[j+1]=key;

	}

	for(i=0;i<n;i++)
	{
		printf("%d",no[i]);
	}

	getch();


}