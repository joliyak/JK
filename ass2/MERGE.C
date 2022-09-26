#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Merge(int arr[],int l, int mid,int r)
{
	int i,j,k;

	int n1=mid-l+1;
	int n2=r-mid;

	int *a=malloc(n1);
	int *b=malloc(n2);

	for(i=0;i<n1;i++)
		a[i]=arr[l+i];
	for(j=0;j<n2;j++)
		b[j]=arr[mid+1+j];

	 i=0;
	 j=0;
	 k=l;


	while(i<n1&&j<n2)
	{
		if(a[i]<=b[j])
		{
			arr[k]=a[i];
			i++;
			k++;

		}
		else
		{
			arr[k]=b[j];
			j++;
			k++;

		}

	}


	while(i<n1)
	{
		arr[k]=a[i];
		i++;
		k++;

	}

	while(j<n2)
	{
		arr[k]=b[j];
		j++;
		k++;


	}


}


void MergeSort(int arr[], int l ,int r)
{
   if(l<r){

	int mid=(l+r)/2;

	MergeSort(arr,l,mid);
	MergeSort(arr,mid+1,r);

	Merge(arr,l,mid,r);
    }

}
void PrintArray(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("\n %d",a[i]);

	}
	printf("\n");


}


int main()
{
	int arr[]={9,8,7,6,5,4,3,2};

	int arr_size=sizeof(arr)/sizeof(arr[0]);

	printf("\n unsorted array :");

	PrintArray(arr,arr_size);

	MergeSort(arr,0,arr_size-1);

	printf("\n sorted array list :");

	PrintArray(arr,arr_size);

	return 0;

}