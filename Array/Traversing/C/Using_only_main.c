#include <stdio.h>

int main(void) {
	// your code goes here
	int a[10], n, i;
	
	// Print the size of the array
	scanf("\n%d",&n); 
	
	// Take elements as user input
	for(i=0;i<n;i++)
	{
	    scanf("\n%d",&a[i]);
	}
	
	
	// Print elements
	printf("\nElements are: ");
	for(i=0;i<n;i++)
	{
	    printf("\n%d element is in %d index",a[i],i);
	}
	return 0;
}

