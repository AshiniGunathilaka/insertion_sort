#include <stdio.h>

void insertionSort (int arr[], int n)
{
	int i, num, j;
	for (i=1; i<n; i++)
	{
		num = arr[i];
		j=i -1;
		
		while (j >= 0 && arr[j] > num)
		{
			arr[j+1]= arr[j];
			j = j -1;
		}
		arr[j+1]= num;
	}
}
void arrayPrint (int arr[], int n)
{
	int i;
	for (i=0; i<n; i++)
	printf(" %d ", arr[i]);
	printf(" \n ");
}
int main()
{
	int arr[]={21,33,10,2,19};
	int n=sizeof(arr)/ sizeof(arr[0]);
	
	insertionSort(arr,n);
	arrayPrint(arr,n);
	
	return 0;
	
}
