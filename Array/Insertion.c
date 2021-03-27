/* Author : Chaitaly Kundu
   Date: 23-03-2021 */

/* Insert an element */
#include <stdio.h>

int main(void) {
	// your code goes here
	int a[10], size, i, k, pos, capacity;

	// Print the size of the array
	printf("Enter the size of the array: ");
	scanf("\n%d",&size);

	// Take elements as user input
	printf("Enter the elements of the array: ");
	for(i=0;i<size;i++)
	{
	    scanf("\n%d",&a[i]);
	}

    // Print the element to be inserted
	printf("Enter the element to be inserted: ");
	scanf("\n%d",&k);

	// Print the position where the element to be inserted
	printf("Enter the position where the element to be inserted: ");
    scanf("\n%d",&pos);

    capacity=sizeof(a)/sizeof(a[0]);
    if(size>=capacity)
    {
        printf("Position is out of bound");
    }
    else
    {
        for(i=size-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=k;
    }
	// Print elements after insertion
	printf("\nElements are: \n\n");
	for(i=0;i<size;i++)
	{
	    printf("%d\t",a[i]);
	}
	return 0;
}
