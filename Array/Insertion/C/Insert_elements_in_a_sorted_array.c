/* Author : Chaitaly Kundu
   Date: 11-06-2021 */

/* Insert an element in a sorted array */

#include<stdio.h>

int Insert(int a[], int n, int element, int capacity)
{
    int i;

	for(i=n-1;(i>=0 && a[i]>element);i--)
        a[i+1]=a[i];
    a[i+1]=element;
    return n+1;
}

int main(void) {
	// your code goes here
	int a[10], n, i, key;

	// Print the size of the array
	printf("Enter the size of the array: ");
	scanf("\n%d",&n);

	// Take elements as user input
	printf("Enter the elements of the array: ");
	for(i=0;i<n;i++)
	{
	    scanf("\n%d",&a[i]);
	}

    // Print the element to be inserted
	printf("Enter the element to be inserted: ");
	scanf("\n%d",&key);


    int capacity=sizeof(a)/sizeof(a[0]);

    if(n>=capacity)
    {
        printf("Position is out of bound");
    }
    else
    {    n = Insert(a,n,key,capacity);
	// Print elements after insertion
	printf("\nElements are: \n\n");
	for(i=0;i<n;i++)
	{
	    printf("%d\t",a[i]);
	}
    }
	return 0;
}