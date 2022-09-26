#include<stdio.h>
#include<conio.h>


void swap(int arr[],int i, int j)
{
	int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

}
int partition( int arr[] , int l, int r)
{
	int pivot=arr[r];
        int i=l-1;
        int j=l;
        for(j=l;j<r;j++)
        {
        	if(arr[j]<pivot)
                {
                	i++;
                        swap(arr,i,j);
                }

        }
        swap(arr,i+1,r);
        return(i+1);

}
void quickSort(int arr[], int l,int r)
{
   if(l<r)
   {
   	int pi=partition(arr,l,r);
        quickSort(arr,0,pi-1);
        quickSort(arr,pi+1,r);

   }


}
void printArray(int arr[], int size)
{
	int i;
        for(i=0;i<size;i++)
        {
        	printf(" %d",arr[i]);

        }

}

void main()
{
	int arr[]={9,8,7,6,5,4,3,2,1};
        int size=sizeof(arr)/sizeof(arr[0]);
        printf("\n unsorted array ");
	printArray(arr,size);
        quickSort(arr,0,size-1);
        printf("\n sorted array ");
        printArray(arr,size);

        getch();
}