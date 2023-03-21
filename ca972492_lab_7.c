#include <stdio.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	int count = 0;
	
	for (i = 0; i < (n-1); i++)
	{
		for (j = 0; j < (n-i-1); j++)  
		{
			if (arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				count++;
			}
		}
	}

	printf("Number of swaps: %d\n\n", count);
}

void printArray(int arr[], int size)
{
	int i;
	
	for (i = 0; i < size; i++)  
		printf("%d ", arr[i]);
		
	printf("\n\n");
}
 
int main()
{
	int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
	printf("\nArray before bubble sort: \n");
	
	int n = 9;  
	printArray(arr, n);
	
	bubbleSort(arr, n);
	
	printf("Sorted array: \n");  
	printArray(arr, n);
	
	return 0;
}